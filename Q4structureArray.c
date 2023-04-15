/*Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    struct employee e[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter %d employee id no.\n",i+1);
        scanf("%d",&e[i].id);
        fflush(stdin);
        printf("Enter %d employee name\n",i+1);
        fgets(e[i].name,20,stdin);
        printf("Enter %d employee salary\n",i+1);
        scanf("%d",&e[i].salary);
    }
    int max=0,id;
    char name[20];
    for(i=0;i<10;i++)
    {
        printf("\n%d. ID %d",i+1,e[i].id);
        printf("\n%d. Name %s",i+1,e[i].name);
        printf("%d. Salary %d",i+1,e[i].salary);
        if(e[i].salary>max)
        {
            max=e[i].salary;
            strcpy(name,e[i].name);
        }
    }
    printf("\n\nHighest salary employee is %s\n ",name);
    return 0;
}