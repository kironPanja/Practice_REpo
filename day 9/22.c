#include<stdio.h>

int main(){
    int arr[] = {10,230,30,40,50,60,70};

    int *ptr = arr + 3;
    printf("%d" , *ptr);
}