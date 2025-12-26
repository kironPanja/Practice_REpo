#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int num1 = 10, num2 = 20;

    cout << "Before swap (reference): num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(num1, num2);  
    cout << "After swap (reference): num1 = " << num1 << ", num2 = " << num2 << endl;

    int a = 30, b = 40;
    cout << "\nBefore swap (pointer): a = " << a << ", b = " << b << endl;
    swap(&a, &b); 
    cout << "After swap (pointer): a = " << a << ", b = " << b << endl;
}

