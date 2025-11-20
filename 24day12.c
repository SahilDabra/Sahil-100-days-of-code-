// Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit


#include <stdio.h>
int main()
{
    int u;
    float bill=0;
    printf("Enter units consumed:");
    scanf("%d",&u);
    if (u<=100)
        bill=u*5;
    else if(u<=200)
        bill=100*5+(u-100)*7;
    else if(u<=300)
        bill=100*5+100*7+(u-200)*10;
    else
        bill=100*5+100*7+100*10+(u-300)*12;
    printf("Electricity bill = ₹%.2f\n",bill);
    return 0;
}
