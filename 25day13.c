// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>

int main() {
    char op;
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c",&op);
    switch(op) 
    {
        case '+': printf("%d\n", a + b);
        break;
        case '-': printf("%d\n", a - b);
        break;
        case '*': printf("%d\n", a * b);
        break;
        case '/': 
            if (b!=0)
                printf("%d\n",a/b);
            else
                printf("Division by zero error\n");
            break;
        case '%': 
            if (b!=0)
                printf("%d\n",a%b);
            else
                printf("Division by zero error\n");
            break;
        default:printf("Invalid operator\n");
    }
    return 0;
}
