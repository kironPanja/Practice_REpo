#include<stdio.h>

int main(){
    int num , pos;
    printf("Enter a number : ");
    scanf("%d" , &num);
    printf("Enter a bit(0 to 31) : ");
    scanf("%d" , &pos);
    if((num & (1 << pos)) != 0)
        printf("%d pos in number %d is On" , pos , num);
    else
        printf("%d pos in number %d is Off" , pos , num);
    return 0;
}

