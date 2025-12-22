#include <stdio.h>
#include <string.h>

int main()
{
    printf("Compare : %d\n", strcmp("Hello", "Hello")); // same string
    printf("Compare : %d\n", strcmp("Hello", "hello")); //
    printf("Compare : %d\n", strcmp("hello", "Hello")); //
}
