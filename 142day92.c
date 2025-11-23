// Store details of 5 students in an array of structures and print all.

#include <stdio.h>

typedef struct Student{
    char name[50];
    int roll;
    int marks;
}stu;

int main()
{
    stu s[5];
    printf("Enter details of 5 students (Name Roll Marks):\n");
    for(int i=0;i<5;i++)
    {
        scanf("%s %d %d",s[i].name,&s[i].roll,&s[i].marks);
    }
    for(int i=0;i<5;i++)
    {
        printf("name = %s, roll no.=0 %d,marks %d/n",s[i].name,s[i].roll,s[i].marks);
    }
    return 0;
}
