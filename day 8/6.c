
#include <stdio.h>

int isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int maxDays(int month, int year) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && isLeap(year))
        return 29;
    return daysInMonth[month - 1];
}
int dayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (day + 13*(month + 1)/5 + k + k/4 + j/4 + 5*j) % 7;
    return (h + 6) % 7;
}
void printCalendar(int month, int year) {
    char *monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("\n  %s %d\n", monthNames[month - 1], year);
    printf("Su Mo Tu We Th Fr Sa\n");

    int startDay = dayOfWeek(1, month, year);
    int days = maxDays(month, year);
    for (int i = 0; i < startDay; i++)
        printf("   ");
    for (int day = 1; day <= days; day++) {
        printf("%2d ", day);
        if ((startDay + day) % 7 == 0)
            printf("\n");
    }
    printf("\n");
}
int main() {
    int month, year;
    printf("Enter month and year: ");
    scanf("%d %d", &month, &year);

    printCalendar(month, year);
    return 0;
}

