/*Write a program to store information of n students and display them using structure*/

#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[20];
    char class[5];
    int rollno;
};
int main()
{
    struct student *s;
    int i,n;
    printf("How many student information you want to store\n");
    scanf("%d",&n);
    s=(struct student*)calloc(n,sizeof(struct student));
    printf("Enter student details int the format Name,class(1st,2nd,3rd.....),rollno.\n");
    for(i=0;i<n;i++)
    {
        printf("enter %d name\n",i+1);
        fflush(stdin);
        fgets((s+i)->name,20,stdin);
        printf("Enter class\n");
        fflush(stdin);
        fgets((s+i)->class,5,stdin);
        printf("Enter roll no.\n");
        scanf("%d",&(s+i)->rollno);
    }
    printf("\nStudents details.................\n");
    for(i=0;i<n;i++)
    {
        printf("Student %d\n",i+1);
        printf("    Name %s    class %s    Roll no. %d",(s+i)->name,(s+i)->class,(s+i)->rollno);
        printf("\n");
    }
    return 0;
}
