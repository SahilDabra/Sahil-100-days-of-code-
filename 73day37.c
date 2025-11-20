// Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main()
{
    int r,c,i,j,s;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    int m[r][c],a[r];
    printf("Enter elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        s=0;
        for(j=0;j<c;j++)
        {
            s+=m[i][j];
        }
        a[i]=s;
    }
    for(i=0;i<r;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
