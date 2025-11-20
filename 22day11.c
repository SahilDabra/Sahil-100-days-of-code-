// Write a program to find profit or loss percentage given cost price and selling price


#include <stdio.h>

int main()
{
    float cp,sp,diff,per;
    printf("Enter cost price and selling price: ");
    scanf("%f %f",&cp,&sp);
    if (sp>cp) 
    {
        diff=sp-cp;
        per=(diff/cp)*100;
        printf("Profit = %.2f\n",per);
    }
    else if(cp>sp) 
    {
        diff=cp-sp;
        per=(diff/cp)*100;
        printf("Loss=%.2f\n",per);
    } 
    else 
        printf("No profit no loss\n");
    return 0;
}
