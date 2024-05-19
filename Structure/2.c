#include<stdio.h>
#include<string.h>
struct school{
    int school_no;
    char *school_name;
};
struct student{
    int rollno;
    char *name;
    struct school sch;
};
int main(){
    struct student s1={1114,"Yashvanth",{573485,"DASSS"}};
    printf("Student RollNo: %d\nStudent Name: %s\nSchool NO: %d\nSchool Name: %s",s1.rollno,s1.name,s1.sch.school_no,s1.sch.school_name);
    return 0;
}