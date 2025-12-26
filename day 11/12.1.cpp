#include <iostream>
using namespace std;

class Num {
    int num;

public:
    void setNum(int n = 10) {
        num = n;
    }
    void dispNum() {
        cout << "Number: " << num << endl;
    }
    bool isEven() {
        return (num % 2 == 0);
    }
    bool isPrime() {
        if (num < 2)
            return false;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
};

int main() {
    Num obj;
    obj.setNum();  
    obj.dispNum();
    cout << "Is Even? " << (obj.isEven() ? "Yes" : "No") << endl;
    cout << "Is Prime? " << (obj.isPrime() ? "Yes" : "No") << endl;

    // obj.setNum(7);  
    // obj.dispNum();
    // cout << "Is Even? " << (obj.isEven() ? "Yes" : "No") << endl;
    // cout << "Is Prime? " << (obj.isPrime() ? "Yes" : "No") << endl;
}

