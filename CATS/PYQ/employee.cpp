#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct employee{
    int empno;
    char name[20];
    float salary;
}emp;
int main(){
    int n;
    float max_salary;
    int indent=0;
    printf("Enter the Number of Employees: ");
    scanf("%d",&n);
    emp em[n];
    for(int i=0;i<n;i++){
        printf("Enter the Employe %d Number:",i+1);
        scanf("%d",&em[i].empno);
        printf("Enter the Employe %d Name:",i+1);
        scanf("%s",&em[i].name);
        printf("Enter the Employe %d Salary:",i+1);
        scanf("%f",&em[i].salary);
    }
    max_salary=em[0].salary;
    for(int i=0;i<n;i++){
        printf("Employee %d Number: %d\n",i+1,em[i].empno);
        printf("Employee %d Name: %s\n",i+1,em[i].name);
        printf("Employee %d Salary: %f\n",i+1,em[i].salary);
    }
    for(int i=0;i<n;i++){
        if(em[i].salary>max_salary){
            max_salary=em[i].salary;
            indent=i;
        }
    }
    printf("Details of Employee with Highest Salary!!\n");
    printf("Employee Number: %d\n",em[indent].empno);
    printf("Employee Name: %s\n",em[indent].name);
    printf("Employee Salary: %f\n",em[indent].salary);
    //update
    int emnum,count;
    printf("Enter the Employee Number whose detail to be updated: ");
    scanf("%d",&emnum);
    for(int i=0;i<n;i++){
        if(em[i].empno==emnum){
            printf("Enter the New Employee Name: ");
            scanf("%s",&em[i].name);
            printf("Enter the New Employee Salary: ");
            scanf("%f",&em[i].salary);
            count++;
        }
    }
    if(count==0){
        printf("No such Employee is Found!!");
    }

    return 0;
}