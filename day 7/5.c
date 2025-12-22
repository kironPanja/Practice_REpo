#include<stdio.h>

int main(){
    int i = 5;
    float f = 2.5;
    char c = 'A';

    float result = i +f;
    printf("Integer : %d\n", i);
    printf("Float : %.2f\n" , f);
    printf("char : %c (ASCII : %d)\n" , c , c );
    printf("result of i + f =  %.2f\n" , result);
    return 0 ;
}
