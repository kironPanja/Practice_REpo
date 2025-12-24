#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';

    int *ptrInt = &a;
    float *ptrFloat = &b;
    char *ptrChar = &c;
    cout << "Integer value: " << *ptrInt << endl;
    cout << "Float value: " << *ptrFloat << endl;
    cout << "Char value: " << *ptrChar << endl;
}


