// Define a struct with enum Gender and print person's gender.


#include <stdio.h>
enum Gender{MALE,FEMALE};
struct Person
{
    char name[50];
    enum Gender gender;
};

void printGender(enum Gender g)
{
    switch(g)
    {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        default:
            printf("Unknown");
    }
}

int main()
{
    struct Person p;
    p.gender = MALE;
    printGender(p.gender);
    return 0;
}
