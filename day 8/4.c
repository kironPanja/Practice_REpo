#include <stdio.h>

int main() {
    int start, count = 0;

    printf("Accept a number: ");
    scanf("%d", &start);

    while (count < 25) {
        int isPrime = 1; 

        if (start < 2) {
            isPrime = 0;
        } else {
            for (int i = 2; i * i <= start; i++) {
                if (start % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime) {
            printf("%d ", start);
            count++;
        }
        start++;
    }
    printf("\n");
    return 0;
}