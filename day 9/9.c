#include <stdio.h>

int main()
{
    char str[] = "Hey , I am Kiron Panja";
    int i, characters = 0, spaces = 0, words;
    for (i = 0; str[i] != '\0'; i++)
    {
        characters++;      
        if (str[i] == ' ') 
            spaces++;
    }
    words = spaces + 1;
    printf("Characters = %d\n", characters);
    printf("Spaces = %d\n", spaces);
    printf("Words = %d\n", words);
    return 0;
}

