#include<stdio.h>
#include<string.h>
struct student{
    char *name;
    int rollno;
}s,*p;
int main(){
    s.name="yash";
    s.rollno=1114;
    p=&s;
    printf("Name: %s\n",p->name);
    printf("Rollno: %d",p->rollno);
    return 0;
}