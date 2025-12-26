#include<iostream>
using namespace std:

void fun(int *);

int main(){
    int var = 10 ;
    cout<<"before var: "<<var<<endl;
    fun(&var);
    cout<<"After var: "<<var<<endl;
}

void fun(int *arg){
    *arg += 100;
}
