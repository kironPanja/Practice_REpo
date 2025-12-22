#include <stdio.h>
#include <math.h>

int main() {
    int d, m, y, c;
    printf("Enter day: ");
    scanf("%d", &d);
    printf("Enter month: ");
    scanf("%d", &m);
    printf("Enter year (full, e.g. 2025): ");
    scanf("%d", &y);

    // Break year into century and year-of-century
    c = y / 100;       // century
    y = y % 100;       // year within century

    // Apply formula: w = (d + [2.6m - 0.2] + y + [y/4] + [c/4] - 2c)
    int w = d + (int)floor(2.6 * m - 0.2) + y + (y / 4) + (c / 4) - 2 * c;

    // Normalize to weekday index (0..6)
    w = (w % 7 + 7) % 7;

    printf("Weekday code (0..6): %d\n", w);

    return 0;
}
