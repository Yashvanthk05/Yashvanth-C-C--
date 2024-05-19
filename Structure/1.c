#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char *name;
};
int main(){
    struct student s1;
    s1.rollno=1114;
    s1.name="Yashvanth";
    printf("Rollno: %d\nName: %s",s1.rollno,s1.name);
    return 0;
}