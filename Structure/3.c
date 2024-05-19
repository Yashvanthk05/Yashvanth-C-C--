#include<stdio.h>
#include<string.h>
struct employee{
    int empno;
    char *empname;
};
int main(){
    struct employee emp1={1114,"Yashvanth"};
    struct employee *p;
    p=&emp1;
    printf("Employee No: %d\n",p->empno);
    printf("Employee Name: %s",p->empname);
    return 0;
}