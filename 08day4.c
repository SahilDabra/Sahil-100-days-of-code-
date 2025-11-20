// Write a program to find and display the sum of the first n natural numbers.#include <stdio.h>


#include <stdio.h>

int main()
{
    int n,i,s = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i = 1;i<= n;i++) 
    {
        s+=i;
    }
    printf("Sum of the first %d natural numbers is %d\n",n,s);
    return 0;
}
