#include <iostream>
#include <array>
#include <complex>

using namespace std;

//-------------------------------------------------------------------------------

class TestStatic {
    public:
        static int staticValue;
};

int TestStatic::staticValue; //need to defined class insdie the static value.
static int directlyStatic; //just directly declared.

//-------------------------------------------------------------------------------

int main(){
    TestStatic testStatic;
    testStatic.staticValue= 123;
    cout << "testStatic.staticValue : " << testStatic.staticValue << endl;
    
    TestStatic::staticValue = 456;
    cout << "TestStatic::staticValue : " << TestStatic::staticValue << endl;
    
    directlyStatic = 789;
    cout << "directly invoke static : " << directlyStatic << endl;
    
    cout << "---------------------------------------" << endl;
    
    array<int, 8> testArray = { 0, 1, 1, 2, 3, 5, 8, 13 };

    for(int i = 0; i < testArray.size(); ++i){
        cout << "i just use normal for : " << &testArray[i] << endl;
    }
    
   
    cout << endl;
    
    for(int &element : testArray){
        cout << "i just use foreach    : " << &element << endl;
    }
    
    cout << "---------------------------------------" << endl;
    
    for(auto element : testArray){
        cout << "i just use foreach    : " << element << endl;
    }
    
     cout << endl;
    
    for(int i = 0; i < testArray.size(); ++i){
        cout << "i just use normal for : " << testArray[i] << endl;
    }
}



/* 
Your last C# code is saved below:
using System;

public class Test
{
    public static void Main()
    {
        int[] testArray = new int[] { 0, 1, 1, 2, 3, 5, 8, 13 };
        int count = 0;
        
        foreach (int element in testArray)
        {
            testArray[count]++;
            count++;
            System.Console.WriteLine(element);
        }
        count = 0;
        
        foreach (int element in testArray)
        {

            System.Console.WriteLine(element);
        }
        System.Console.WriteLine();
    }
}
 */