// Write a program to find the LCM of two numbers
#include <stdio.h>

int main()
{
    int a,b,x,y,t,h,l;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    while(y!=0)
    {
        t=y;
        y=x%y;
        x=t;
    }
    h=x;
    l=(a*b)/h;
    printf("LCM is %d\n",l);
    return 0;
}
