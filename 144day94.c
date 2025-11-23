// Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

typedef struct Student {
    char name[50];
    int roll;
    int marks;
}stu;

void printStudent(stu s)
{
printf("Name: %s  Roll: %d  Marks: %d\n",s.name,s.roll,s.marks);
}

int main()
{
    stu s={"Neha", 104, 92};
    printStudent(s);
    return 0;
}
