#include<stdio.h>

int main(){
    int var = 10;

    int *ptr = &var;

    printf("%d\n" , var);
    printf("%p\n" , &var);
    printf("%p\n" , ptr);
    printf("%p\n" , &ptr);
    printf("%p\n" , *&ptr);
    printf("%d\n" , **&ptr);
    printf("%p\n" , *&*&*&*&*&*&ptr);
    printf("Var : %p\n" , *&*&*&*&*&*&var);
    printf("%d\n" , **&*&*&*&*&*&ptr);
    printf("Var : %d\n" , &*&*&*&*&*&var);
}