// Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

#include <stdio.h>
int main()
{
    int n, i, j, f;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Next greater elements: ");
    for(i = 0; i < n; i++)
    {
        f = -1;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] > a[i])
            {
                f = a[j];
                break;
            }
            printf("  %d  ", f);

        }
    }
    return 0;
}
