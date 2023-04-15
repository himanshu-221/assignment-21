/*. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student*/
#include<stdio.h>
#include<stdlib.h>
struct marks{
    int rollno;
    char name[20];
    int chem_mark;
    int maths_marks;
    int phy_marks;
};
float percentage(struct marks x[]);

int main()
{
    struct marks m[5];
    int i;
    printf("Enter 5 student's roll no., name and marks of the subjects(marks should be between 0-100)\n");
    for(i=0;i<2;i++)
    {
        printf("Enter %d students rollno.\n",i+1);
        scanf("%d",&m[i].rollno);
        printf("Enter name\n");
        fflush(stdin);
        fgets(m[i].name,20,stdin);
        printf("Enter chemistry marks\n");
        scanf("%d",&m[i].chem_mark);
        printf("Enter maths marks\n");
        scanf("%d",&m[i].maths_marks);
        printf("Enter physics marks\n");
        scanf("%d",&m[i].phy_marks);
    }
    printf("Percentage of the students\n");
    for(i=0;i<2;i++)
    {
        float per=(m[i].chem_mark+m[i].maths_marks+m[i].phy_marks)/3.0;
        printf("student %d\n",i+1);
        printf("    Roll no. %d\n    Name %s",m[i].rollno,m[i].name);
        //per=percentage(m);
        printf("    Score %.2f",per);
        printf("\n");
    }
    return 0;
}
