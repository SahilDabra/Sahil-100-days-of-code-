// Write a program to check if a number is a palindrome#include <stdio.h>

int main()
{
    int n,r=0,t,d;
    printf("Enter a number:");
    scanf("%d",&n);
    t=n;
    while(t!=0) 
    {
        d=t%10;
        r=r*10+d;
        t=t/10;
    }
    if (n==r) 
    {
        printf("The number is a palindrome.\n");
    } 
    else 
    {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}
