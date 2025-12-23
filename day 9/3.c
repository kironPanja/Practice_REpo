#include <stdio.h>

int main()
{
    char name[25];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\nHello %s!\n", name);

    if (age < 5)
        printf("You are too young for school.\n");
    else if (age < 11)
        printf("You are in Elementary School.\n");
    else if (age < 14)
        printf("You are in Middle School.\n");
    else if (age < 16)
        printf("You are in High School.\n");
    else if (age < 18)
        printf("You are in Pre-University.\n");
    else if (age < 21)
        printf("You are in Under Graduation.\n");
    else
        printf("You are an Adult.\n");
    return 0;
}
