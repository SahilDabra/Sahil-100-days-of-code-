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
    for(t=1;t<=3;t++)
    {
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
                printf("Invalid light\n");
        }
    }
    return 0;
}
