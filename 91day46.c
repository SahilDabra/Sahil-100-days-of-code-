// Remove all vowels from a string.

#include <stdio.h>

int main()
{
    char s[100];
    int i,j=0;

    printf("Enter a string: ");
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i]!='\0';i++)
    {
        if (s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
        {
            s[j++]=s[i];
        }
    }
    s[j]='\0';
    printf("String without vowels: %s",s);

    return 0;
}
