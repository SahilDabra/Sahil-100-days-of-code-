// Write a program to check if a number is prime


#include <stdio.h>

int main()
{
    int n,i,f=0;
    printf("Enter a number ");
    scanf("%d",&n);
    if(n<=1) 
    {
        printf("The number is not prime.\n");
        return 0;
    }
    for(i=1;i<=n;i++) 
    {
        if(n%i==0) 
        {
            f++;
            break;
        }
    }
    if(f==2) 
    {
        printf("The number is not  prime.\n");
    }
    else 
    {
        printf("The number is prime");
    }

    return 0;
}
