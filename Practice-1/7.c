#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*Define a structure named Student that has RollNo, Name, Address, Age & 5 subject marks of 
a student. Write a program that reads the data of 12 students and display them in tabular 
form. Use separate func5ons for reading and prin5ng the details*/
struct submark{
        float mark;
};
struct student{
    int rollno;
    char name[15];
    char address[20];
    int age;
    struct submark sm[5];
};
int main(){
    struct student s[2];
    for(int i=0;i<2;i++){
        printf("Enter the RollNo,Name,Address,Age: ");
        scanf("%d %s %s %d",&s[i].rollno,&s[i].name,&s[i].address,&s[i].age);
        for(int j=0;j<5;j++){
            printf("Enter the Subject %d Marks: ",j+1);
            scanf("%f",&s[i].sm[j].mark);
        }
    }
    for(int i=0;i<2;i++){
        printf("Rollno: %d\nName: %s\nAddress: %s\nAge: %d\n",s[i].rollno,s[i].name,s[i].address,s[i].age);
        for(int j=0;j<5;j++){
            printf("Mark %d: %f\n",j+1,s[i].sm[j].mark);
        }
    }
}