// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>
int main()
{
    int r,i,j,s;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(s = 1; s < i; s++) 
        {
            printf(" ");
        }
        for(j=r-i+1;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
