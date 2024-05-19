#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student{
    int rollno;
    char name[20];
}stud;
int main(){
    stud s[4];
    for(int i=0;i<4;i++){
        printf("Enter the Student %d Rollno: ",i+1);scanf("%d",&s[i].rollno);
        printf("Enter the Student %d Name: ",i+1);scanf("%s",&s[i].name);
    }
    for(int j=0;j<4;j++){
        printf("Student %d Rollno: %d\n",j+1,s[j].rollno);
        printf("Student %d Name: %s\n",j+1,s[j].name);
    }
}