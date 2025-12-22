#include <stdio.h>

// int main()
// {
//     int cntOne, cntTwo, num = 1;
//     for (cntOne = 0; cntOne < 5; cntOne++)
//     {
//         for (cntTwo = 0; cntTwo < 5; cntTwo++)
//             printf("%d", num++);
//         printf("\n");
//     }
// }

int main() {
    int cntOne = 0, cntTwo, num = 1;

    while (cntOne < 5) {
        cntTwo = 0;  
        while (cntTwo < 5) {
            printf("%d", num++);
            cntTwo++;
        }
        printf("\n");
        cntOne++;
    }
    return 0;
}
