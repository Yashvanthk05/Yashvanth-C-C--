#include<stdio.h>
#include<string.h>
typedef struct student{
    int rollno;
    char name[15];
}stud;
int main(){
    stud s1,*ptr;
    ptr=&s1;
    printf("Enter the Student Rollno: ");
    scanf("%d",&ptr->rollno);
    printf("Enter the Student Name: ");
    scanf("%s",&ptr->name);
    printf("\n\n");
    printf("Student Rollno: %d\nStudent Name: %s",ptr->rollno,ptr->name);
    return 0;
}