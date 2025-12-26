#include<iostream>
using namespace std;

class Test{
    public:
        Test(){}
        Test(int x){}

};

int main(){
    Test obj = 100;
    Test objOne = obj;
    cout<<"In Main()"<<endl;
}