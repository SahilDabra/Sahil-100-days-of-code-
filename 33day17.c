// Write a program to check if a number is an Armstrong number
#include <stdio.h>


#include <math.h>

int main()
{
    int n,t,r,s=0;
    int c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    t=n;
    while(t!=0) 
    {
        t=t/10;
        c++;
    }
    t=n;
    while(t!=0) 
    {
        r=t%10;
        s+=(int)(pow(r,c));
        t=t/10;
    }
    if (s==n) 
    {
        printf("The number is an Armstrong number.\n");
    } 
    else 
    {
        printf("The number is not an Armstrong number.");
    }
    return 0;
}
