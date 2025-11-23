// Find and print the student with the highest marks.


#include <stdio.h>

typedef struct Student{
    char name[50];
    int roll;
    int marks;
}stu;

struct Student getTopStudent(stu s[], int n)
{
    stu top=s[0];
    for(int i=1;i<n;i++)
    {
        if(s[i].marks>top.marks)
        {
            top=s[i];
        }
    }
    return top;
}

int main()
{
    int n=3;
    stu x[3]={{"Riya",101,89},{"Karan",102,96},{"Meena",103,92}};
    stu top=getTopStudent(x,n);
    printf("Topper %s (Marks: %d)",top.name,top.marks);
    return 0;
}
