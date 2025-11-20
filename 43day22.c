// Write a program to check if a number is a strong number
#include <stdio.h>

int main()
{
    int n,t,r,s=0,f,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        f=1;
        for(i=1;i<=r;i++)
        {
            f*=i;
        }
        s+=f;
        t/=10;
    }
    if(s==n)
        printf("Strong number\n");
    else
        printf("Not a strong number\n");
    return 0;
}
