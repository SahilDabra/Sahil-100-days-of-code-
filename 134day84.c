// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.


#include <stdio.h>

typedef enum achievement
{
    SUCCESS = 1,
    FAILURE,
    TIMEOUT
}s;

int main()
{
    s x;
    printf("Enter a number 1-3 for operation status: ");
    scanf("%d", &x);
    switch(x)
    {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}
