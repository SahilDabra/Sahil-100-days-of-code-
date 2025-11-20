// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

typedef enum roles
{
    ADMIN = 1,
    USER,
    GUEST
}r;
int main()
{
    r x;
    printf("Enter a number from 1 to 3");
    scanf("%d",&x);
    switch(x)
    {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            ntf("Invalid role\n");
    }
    return 0;
}
