#include <stdio.h>
 
struct employee{
    char name[30];
    int empId;
    float salary;
};
 
int main()
{
    int n,i;
    printf("Enter number of employees data:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        struct employee emp;
        printf("\nEnter details :\n");
        printf("Name:");
        scanf("%s",emp.name);
        printf("ID:");
        scanf("%d",&emp.empId);
        printf("Salary:");  
        scanf("%f",&emp.salary);
        
        printf("\nEntered details are: \n");
        printf("Name: %s ",emp.name);
        printf("Id: %d ",emp.empId);
        printf("Salary: %f ",emp.salary);
    }
    return 0;
}
