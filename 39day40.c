// Write a program to find the product of odd digits of a number


#include <stdio.h>

int main()
{
    int n,r,p=1,f=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2!=0) 
        {
            p*=r;
            f=1;
        }
        n/=10;
    }
    if(f==1)
        printf("Product of odd digits is%d\n",p);
    else
        printf("No odd digits found\n");
    return 0;
}
