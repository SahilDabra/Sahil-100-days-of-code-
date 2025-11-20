// Count characters in a string without using built-in length functions.
#include <stdio.h>

int main()
{
    char str[1000];
    int i=0;
    printf("Enter a string (no spaces): ");
    scanf("%s",str);
    while (str[i]!='\0')
    {
        i++;
    }
    printf("Length of the string: %d\n", i);
    return 0;
}
