// Write a program to input time in seconds and convert it to hours:minutes:seconds format.


#include <stdio.h>

int main()
{
    int s,h,m;
    printf("Enter time in seconds: ");
    scanf("%d",&s);
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    printf("%02d:%02d:%02d\n",h,m,s);
    return 0;
}
