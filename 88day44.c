// Replace spaces in a string with hyphens.
#include <stdio.h>
int main()
{
    char s[100];
    int i;
    printf("Enter a string: ");
    fgets(s,sizeof(s),stdin);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            s[i]='-';
        }
    }
    printf("Modified string: %s", s);

    return 0;
}
