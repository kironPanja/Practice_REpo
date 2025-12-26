#include<iostream>
using namespace std;

int area(int side){
    return side * side;
}
int area(int length , int width){
    return length*width;
}
double area(double radius){
    return 3.14 * radius * radius;
}

int main(){
    int side = 5;
    int length = 10 , width = 4;
    double radius = 3.5;

    cout<<"Area of Square(side = "<<side<<"):"<<area(side)<<endl;
    cout<<"Area of Rectangle(length X width = "<<length<<" X "<<width<<"):"<<area(length, width)<<endl;
    cout<<"Area of Circle(radius = "<<radius<<"):"<<area(radius)<<endl;
}