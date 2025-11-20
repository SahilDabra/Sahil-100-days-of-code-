// Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main() 
{
    int n,i,j,f;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=0;
        for(j=1;j<=i;j++) 
        {
            if(i%j==0) 
            {
                f++;
            }
        }
        if(f==2)
            printf("%d\n", i);
    }
    return 0;
}
