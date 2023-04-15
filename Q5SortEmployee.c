/* Write a function to sort employees according to their salaries [ refer structure from
question 1]
*/
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
    struct employee temp;
    int i,j;
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
    
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(e[j].salary<e[i].salary)
            {
                temp.id=e[i].id;
                e[i].id=e[j].id;
                e[j].id=temp.id;

                strcpy(temp.name,e[i].name);
                strcpy(e[i].name,e[j].name);
                strcpy(e[j].name,temp.name);

                temp.salary=e[i].salary;
                e[i].salary=e[j].salary;
                e[j].salary=temp.salary;

            }

        }
    }
     for(i=0;i<10;i++)
    {
        printf("\n%d. ID %d",i+1,e[i].id);
        printf("\n%d. Name %s",i+1,e[i].name);
        printf("%d. Salary %d",i+1,e[i].salary);
    }
    return 0;
}