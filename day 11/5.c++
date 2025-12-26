#include<iostream>
using namespace std;

double simpleInterest(double principal , double rate =8.0 , double time =1.0){
    return (principal * rate * time) / 100.0;
}

int main(){
    double principal;

    cout<<"Enter the principal amount : ";
    cin>>principal;

    cout<<"Simple Interest ( default rate = 5% , time = 1 year) : "<< simpleInterest(principal)<<endl;
}