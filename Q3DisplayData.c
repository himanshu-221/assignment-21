/*Write a function to display employee data. [ Refer structure from question 1 ]
*/
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    struct employee e1;
    printf("Enter employee id no.\n");
    scanf("%d",&e1.id);
    fflush(stdin);
    printf("Enter employee name\n");
    fgets(e1.name,20,stdin);
    printf("Enter employee salary\n");
    scanf("%d",&e1.salary);
    printf("\nID %d",e1.id);
    printf("\nName %s",e1.name);
    printf("\nSalary %d",e1.salary);
    return 0;
}