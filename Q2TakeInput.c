/*Write a function to take input employee data from the user. [ Refer structure from
question 1 ]
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
    scanf("%d",e1.id);
    printf("Enter employee name\n");
    gets(e1.name);
    printf("Enter employee salary\n");
    scanf("%d",e1.salary);
    return 0;
}