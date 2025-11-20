// Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.


#include <stdio.h>
typedef enum days
{
    MONDAY=1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
}d;
int main()
{
    d today;
    for(today=1;today<=7;today++) 
    {
        printf("Day %d: ", today);
    switch(today)
    {
        case MONDAY:
            printf("Today is Monday.\n");
            break;
        case TUESDAY:
            printf("Today is Tuesday.\n");
            break;
        case WEDNESDAY:
            printf("Today is Wednesday.\n");
            break;
        case THURSDAY:
            printf("Today is Thursday.\n");
            break;
        case FRIDAY:
            printf("Today is Friday.\n");
            break;
        case SATURDAY:
            printf("Today is Saturday.\n");
            break;
        case SUNDAY:
            printf("Today is Sunday.\n");
            break;
        default:
            printf("Invalid day.\n");
    }

    return 0;
}
}