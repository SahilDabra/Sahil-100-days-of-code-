// Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main()
{
    int n,i,s = 0;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        s+=a[i][i];
    }
    printf("%d\n",s);
    return 0;
}
