#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][100]; 
    int n, i, maxLen = 0, index = 0;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]); 
        if (strlen(str[i]) > maxLen)
        {
            maxLen = strlen(str[i]);
            index = i;
        }
    }
    printf("\nLongest string: %s\n", str[index]);
    printf("Length: %d\n", maxLen);
    return 0;
}
