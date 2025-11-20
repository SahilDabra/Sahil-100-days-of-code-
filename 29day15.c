// Write a program to calculate the factorial of a number.
#include <stdio.h>

int main()
{
    int n, i,f = 1;
    printf("Enter no: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++) 
    {
        f*=i;
    }
    printf("%llu\n",f);
    return 0;
}
