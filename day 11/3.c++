#include<iostream>
using namespace std;

void fun(int = 10 , int = 20);

int main(){
    fun();
    fun(100);
    fun(1000 , 2000);
}

void fun(int argOne , int argTwo){
    cout<<"Void fun ("<<argOne<<","<<argTwo<<")called"<<endl;
}