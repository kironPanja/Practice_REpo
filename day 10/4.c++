#include<iostream>
using namespace std;

int main(){
    static int arr[1024] = {1,2,3,4};

    arr[5] = 50;
    cout<<arr[5]<<endl;
}