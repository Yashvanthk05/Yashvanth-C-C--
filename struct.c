#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char *name;
    float percent;
};
int main(){
    struct student obj;
    obj.name="Yashvanth";
    obj.rollno=1114;
    obj.percent=9.54;
    printf("Name: %s\nRollNo: %d\nGPA: %0.2f",obj.name,obj.rollno,obj.percent);
    return 0;
}