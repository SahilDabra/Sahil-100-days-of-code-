// Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
#include <stdio.h>

int main() 
{
    int r,i,j,start,sp;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        sp=r-i;
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        start=r-i+1;
        for(j=start;j<=r;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
