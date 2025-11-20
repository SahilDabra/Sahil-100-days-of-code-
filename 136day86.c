// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
typedef enum ops
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
}o;
int main()
{
    o c;
    int a,b;
    a=0;b=0;
    printf("Enter 1 for add 2 for subtract or 3 for multiply  and two numbers: ");
    scanf("%d %d %d", &c, &a, &b);
    switch(c)
    {
        case ADD:
            printf("%d\n",a+b);
            break;
        case SUBTRACT:
        if(a>b)
            printf("%d\n", a - b);
        else 
            printf("%d\n", b - a);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
