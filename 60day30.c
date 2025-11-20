// Count positive, negative, and zero elements in an array
#include <stdio.h>

int main() 
{
    int n,i,p=0,ne=0,z=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
            p++;
        else if(a[i]<0)
            ne++;
        else
            z++;
    }
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",ne);
    printf("Zero: %d\n",z);
    return 0;
}
