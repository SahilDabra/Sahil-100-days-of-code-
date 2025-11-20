
#include <stdio.h>
int main()
{
    int g,i,j;
    printf("Enter number of groups: ");
    scanf("%d",&g);
    for(i=1;i<=g;i++)
    {
        int stars;
        printf("Enter number of stars in group %d:",i);
        scanf("%d",&stars);
        for(j=1;j<=stars;j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}
