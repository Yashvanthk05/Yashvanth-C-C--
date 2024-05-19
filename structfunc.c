#include<stdio.h>
typedef struct studet{
    int rollno;
    char *name;
}student;
void display(student s1){
    printf("Rollno: %d\n",s1.rollno);
    printf("Name: %s",s1.name);
}
int main(){
    student s1={1114,"Yashvanth"};
    display(s1);
    return 0;
}