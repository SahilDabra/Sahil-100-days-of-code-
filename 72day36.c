// find sum of all element in m


#include <stdio.h>

int main()
{
    int r,c,s;
    s=0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
            s+=arr[i][j];
        }
    }

    printf("The 2D array is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum of all elements is %d",s);

    return 0;
}