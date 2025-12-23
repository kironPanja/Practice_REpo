#include <stdio.h>

int main()
{
    int n, i;
    int sum = 1; 
    int term = 1;

    printf("Enter value of n : ");
    scanf("%d", &n);

    if (n > 30)
    {
        printf("Error: n cannot exceed 30.\n");
        return 1;
    }
    for (i = 1; i <= n; i++)
    {
        term = term * 2; 
        sum += term;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
