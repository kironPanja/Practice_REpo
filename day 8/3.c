#include<stdio.h>

int main() {
    int start, end;
    printf("Enter a number: ");
    scanf("%d", &start);
    end = start + 9;

    printf("\nMultiplication Table:\n");
    for (int i = start; i <= end; i++) {
        for (int j = start; j <= end; j++) {
            printf("%4d ", i * j);
        }
        printf("\n");
    }

    return 0;
}