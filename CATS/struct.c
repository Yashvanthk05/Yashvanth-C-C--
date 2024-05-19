#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    int rollno;
    char name[15];
};
int main(){
    struct student s1;
    s1.rollno=231114;
    strcpy(s1.name,"Yashvanth");
    printf("%d\n%s",s1.rollno,s1.name);
    return 0;
}