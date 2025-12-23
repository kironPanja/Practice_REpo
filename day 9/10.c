#include <stdio.h>
#include <ctype.h> 

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str); 

    printf("\nUpper Case: ");
    for (i = 0; str[i] != '\0'; i++)
        putchar(toupper(str[i]));
    printf("\nLower Case: ");
    for (i = 0; str[i] != '\0'; i++)
        putchar(tolower(str[i]));
    printf("\nTitle Case: ");
    int newWord = 1;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            newWord = 1;
            putchar(' ');
        }
        else
        {
            if (newWord)
            {
                putchar(toupper(str[i]));
                newWord = 0;
            }
            else
            {
                putchar(tolower(str[i])); 
            }
        }
    }
    return 0;
}
