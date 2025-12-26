#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        char name[25];
        double sal;

    public:
        void getDetails(){
            cout<<"Enter ID , Name and sal :";
            cin>>id>>name>>sal;
        }
        void disDetails(){
            cout<<"Employee Details ID: "<<id<<"\nName: "<<name<<"\nsal :"<<sal<<endl;
        }
};

int main(){
    Employee varOne;
    varOne.getDetails();
    varOne.disDetails();
}
