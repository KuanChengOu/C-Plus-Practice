#include <iostream>
 
using namespace std;

static int staticA = 50; //global int
int staticB; //defalut global int
void global_print(){
    std::cout << "print_Test" << std::endl;
}

//------------------------------------------------------------
struct StructTest { //default is public
    
    //struct cannot declare Constructor and Destructor.
    int getTest(void);
    void setTest(int length, int width);
    class InnerClass{
        public: 
            int innerValue = 480829;
            void innerSetTest(int innerValue);
            /*void innerSetTest(int innerValue){
                this->innerValue = innerValue;
            }*/
    };
    InnerClass innerClass; //to define an InnerClass Object for innerClass 
    
    private:
        int length;
        int width;
   
};

void StructTest::InnerClass::innerSetTest(int innerValue){
    StructTest::InnerClass::innerValue = innerValue;
}

void StructTest::setTest(int length, int width){
    StructTest::length = length; //also can use this->your parameter
    StructTest::width = width; //also can use this->your parameter
}

int StructTest::getTest(){
    return length * width;
}
//------------------------------------------------------------

//------------------------------------------------------------
class ClassTest { //default is private

    int length;
    int width;
    
    public:
        ClassTest(int length, int width);
        int getTest(void);
        void setTest(int length, int width);
        struct InnerStruct{ 
            int innerValue = 811125;    
        };
        InnerStruct innerStruct; //to define an InnerSturct Object for innerStruct
    
       
   
};

ClassTest::ClassTest(int length, int width){
    ClassTest::length = length; //also can use this->your parameter
    ClassTest::width = width; //also can use this->your parameter
}

void ClassTest::setTest(int length, int width){
    ClassTest::length = length; //also can use this->your parameter
    ClassTest::width = width; //also can use this->your parameter
}

int ClassTest::getTest(){
    return length * width;
}
//------------------------------------------------------------

int main() {
    int stackA;
    cout << "global void : ";
    global_print();
    cout << "there is static global int : " << &staticA << endl;
    cout << "default global int : " << &staticB << endl;
    cout << "main() stack int : " << &stackA << endl;
    
    cout << "---------------------------------------" << endl;
    
    StructTest structTest;
    structTest.innerClass.innerSetTest(206);
    cout << "innerClass inside Struct -> set method "<< structTest.innerClass.innerValue << endl;
    structTest.setTest(2, 2);
    cout << "innerClass inside Struct -> get value : " << structTest.innerClass.innerValue << endl;
    cout << "Struct set : " << structTest.getTest() << endl;
    
    cout << "---------------------------------------" << endl;
    
    ClassTest classTest(4, 4);
    cout << "innerStruct inside Class -> get value : " << classTest.innerStruct.innerValue << endl;
    cout << "Class Constructor : " << classTest.getTest() << endl;
    classTest.setTest(8, 8);
    cout << "Class set : " << classTest.getTest() << endl;
    
}