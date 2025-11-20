// Check if a string is a palindrome.

#include <stdio.h>
int main()
{
    char str[100];
    int i,len=0;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    while(str[len]!='\0')
    {
        len++;
    }
    if(str[len]=='\n')
    {
        str[len]='\0';
    }
    for(i=0;i<len/2;i++)
    {
        if (str[i]!=str[len-i-1])
        {
            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");
    return 0;
}
