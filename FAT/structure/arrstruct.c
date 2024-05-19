#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    char name[15];
    int rollno;
    float cgpa;
};
int main(){
    struct student s[5];
    for(int i=0;i<5;i++){
        printf("Enter the Name: ");
        scanf("%s",&s[i].name);
        printf("Enter the RollNO: ");
        scanf("%d",&s[i].rollno);
        printf("Enter the CGPA: ");
        scanf("%f",&s[i].cgpa);
    }
    for(int i=0;i<5;i++){
        printf("Name: %s  RollNO:%d  CGPA:%0.2f\n",s[i].name,s[i].rollno,s[i].cgpa);
    }
    return 0;
}