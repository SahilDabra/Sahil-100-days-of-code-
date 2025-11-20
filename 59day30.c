// Count even and odd numbers in an array
#include <stdio.h>

int main()
{
    int n,i,e=0, o=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2 ==0)
            e++;
        else
            o++;
    }
    printf("Even: %d\n",e);
    printf("Odd: %d\n",o);
    return 0;
}
