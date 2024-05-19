#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student{
    int rollno;
    char name[15];
}stud;
int main(){
    stud s1={231114,"Yashvanth"};
    printf("%d\n%s",s1.rollno,s1.name);
    return 0;
}