#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *ptr = &a;
    cout << "Dia chi cua a: " << &a <<endl;
    cout << "Gia tri cua con tro ptr: " << ptr << endl;
    cout << "Gia tri cua a: " << *ptr << endl;
    cout << "Gia tri cua a: " << a << endl;
    (*ptr)++;
    cout << "Gia tri cua a: " << a << endl;
    
    int *ptr2 = &a;
    cout << "Dia chi cua a: " << &a << endl;
    cout << "Gia tri cua con tro ptr: " << ptr << endl;
    cout << "Gia tri cua con tro ptr2: " << ptr2 << endl;

    return 0;
}
