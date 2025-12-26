#include <iostream>
using namespace std;


double power(double base, int exponent = 2)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Power (default exponent=2): " << power(base) << endl;
    cout << "Enter exponent: ";
    cin >> exponent;
    cout << "Power (custom exponent): " << power(base, exponent) << endl;
}
