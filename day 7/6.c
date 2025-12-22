#include<stdio.h>

int main(){
    int a = 8, b = 3;

    printf("Relational : a > b = %d\n" , a>b);
    printf("Relational : a < b = %d\n" , a<b);
    printf("logical : (a>5) && (b<5) = %d\n" , (a>5) && (b<5));
    printf("Bitwise AND : a & b = %d\n", a & b);
    printf("Bitwise OR: a | b = %d\n", a | b);
    printf("Ternary : (a > b) ? a : b = %d\n" , (a > b) ? a : b);
    return 0;
}