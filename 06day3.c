// Write a program to swap two numbers using a third variable.


#include <stdio.h>

int main()
{
    int a,b,t;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("After swapping:\n");
    printf("First number: %d\n",a);
    printf("Second number: %d",b);
    return 0;
}
