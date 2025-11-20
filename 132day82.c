// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.


#include <stdio.h>
typedef enum lights
{
    RED = 1,
    YELLOW,
    GREEN
}l;
int main()
{
    l t;
    printf("Enter a number 1-3 for the traffic light:");
    scanf("%d",&t);
    switch(t)
    {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}
