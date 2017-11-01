#include <iostream>

using namespace std;

int main() {
    int normalArray[] = {11, 22, 33};
    
    cout << "first : " << normalArray << endl;
    cout << &normalArray[0] << endl;
    cout << &normalArray[1] << endl;
    cout << &normalArray[2] << endl;
    
    cout << "---------------------------------------" << endl;
    
    int *a = new int[3]{111, 222, 333};

    cout << "first : " << &a << endl;
    cout << &a[0] << endl;
    cout << &a[1] << endl;
    cout << &a[2] << endl;

    cout << "---------------------------------------" << endl;
    
    int *aa, *bb, cc;
    aa = new int(10);
    bb = new int(20);
    cc = 30;
    cout << *aa << endl;
    cout << *bb << endl;
    cout << cc << endl;
    return 0;
}
