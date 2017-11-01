#include <iostream>
using namespace std;

class DeclarationClass{
  public:
    int test;  
    int getTest(){ //you also can pre-defined in here.
        return this->test;
    }
    void setTest(int test); //just declared a setTest method, don't forget define it.
    
};

void DeclarationClass::setTest(int test){ //must defined setTest a content.
   this->test = test;
}

/*int DeclarationClass::getTest(){
    return this->test;
}*/

int main() {
    DeclarationClass declarationClass;
    declarationClass.setTest(1218);
    
    cout << declarationClass.getTest() << endl;
    return 0;
}