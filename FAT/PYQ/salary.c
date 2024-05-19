#include<stdio.h>
#include<stdlib.h>
void calculatetax(int sal){
    int taxrate=0,taxamt=0;
    if(sal<=10000){
        taxrate=0;
        taxamt=0;
    }
    else{
        if(sal>10000 && sal<=50000){
            taxrate=10;
            taxamt=0.1*sal;
        }
        else if(sal>50000 && sal<=100000){
            taxrate=20;
            taxamt=0.2*sal + 4000;
        }
        else if(sal>100000){
            taxrate=30;
            taxamt=0.3*sal + 12000;
        }
    }
    printf("Employee's Salary: %d\nEmployee Tax Rate(in Percent): %d\nEmployee's Tax Amount(in rupees): %d\n",sal,taxrate,taxamt);
}
int main(){
    int choice=1;
    int salary;
    while(choice!=-1){
        printf("Enter the Employee Salary: ");
        scanf("%d",&salary);
        calculatetax(salary);
        printf("Enter the Choice Whether to Continue Yes(1)/No(-1): ");
        scanf("%d",&choice);
    }
    return 0;
}