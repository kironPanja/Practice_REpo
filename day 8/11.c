#include <stdio.h>

void print1to10(int n) {
    if (n > 10) return;
    printf("%d ", n);
    print1to10(n + 1);
}

int main() {
    print1to10(1);
    return 0;
}

