#include<iostream>
using namespace std;

void fun(int);
void fun(float);

int main(){
    fun(10.234);
}

void fun(int arg){
    cout<<"Int type : arg"<<endl;
}
void fun(float arg){
    cout<<"Float type : arg"<<endl;
}