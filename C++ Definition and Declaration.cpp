#include <iostream>
using namespace std;

//in c++.h ----------------------------------------------------
class DeclarationClass{
  public:
    int test;  
    int getTest(){ //you also can pre-defined in here.
        return this->test;
    }
    void setTest(int test); //just declared a setTest method, don't forget define it.
    
};
//----------------------------------------------------------------

// in c++.cpp ----------------------------------------------------
void DeclarationClass::setTest(int test){ //must defined setTest a content.
   this->test = test;
}
//----------------------------------------------------------------

/*int DeclarationClass::getTest(){
    return this->test;
}*/

int main() {
    DeclarationClass declarationClass; // non-pointer.
    declarationClass.setTest(429); // non-pointer must be use . to call a function.
    
    DeclarationClass *declarationClassPointer = new DeclarationClass(); // pointer.
    declarationClassPointer->setTest(1125); // pointer must be use -> to call a function.
  
    cout << declarationClass.getTest() << endl; // non-pointer.
    cout << declarationClassPointer->getTest() << endl; // pointer.
  
    return 0;
}
