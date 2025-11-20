// Count frequency of a given character in a string.

#include <stdio.h>
int main()
{
    char s[100],c;
    int i,count=0;

    printf("Enter a string: ");
    fgets(s,sizeof(s),stdin);
    printf("Enter a character: ");
    scanf("%c",&c);
    for (i=0;s[i]!='\0';i++)
    {
        if (s[i]==c)
        {
            count++;
        }
    }
    printf("Frequency of '%c': %d\n",c,count);
    return 0;
}
