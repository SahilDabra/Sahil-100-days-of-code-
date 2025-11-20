// Write a program to input a year and check whether it is a leap year or not using conditional statements


#include <stdio.h>

int main()
{
    int y;
    scanf("%d",&y);
    if(y%4==0)
        printf("Leap year\n");
    else
        printf("Not a leap year\n");
    return 0;
}
