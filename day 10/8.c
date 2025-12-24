#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); 
    int arr[10], cnt;
    for (cnt = 0; cnt < 10; cnt++)
        arr[cnt] = rand() % 100;
    printf("Arr: ");
    for (cnt = 0; cnt < 10; cnt++)
        printf("%d  ", arr[cnt]);
    printf("\n");
}
