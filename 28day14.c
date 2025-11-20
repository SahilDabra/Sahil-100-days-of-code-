// Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>

int main()
{
    int n, i,prod = 1;
    printf("Enter no:");
    scanf("%d",&n);
    for (i=2;i<=n;i+=2) 
    {
        prod*= i;
    }
    printf("%llu\n",prod);
    return 0;
}
