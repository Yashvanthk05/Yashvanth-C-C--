#include<stdio.h>
#include<string.h>
struct student{
    int studid;
    char name[20];
    int sportsmarks;
    int scholarpercent;
    int fees;
    int avgmarks;
    struct marks{
        int maths;
        int physics;
        int chemistry;
    }marks;
};
int main(){
    int fees=150000;
    struct student s1;
    cout<<"Enter the Student ID: ";
    cin>>s1.studid;
    cout<<"Enter the Student Name: ";
    cin>>s1.name;
    cout<<"Enter the Sports Marks: ";
    cin>>s1.sportsmarks;
    cout<<"Enter the Student Maths Marks: ";
    cin>>s1.marks.maths;
    cout<<"Enter the Student Physics Marks: ";
    cin>>s1.marks.physics;
    cout<<"Enter the Student Chemistry Marks: ";
    cin>>s1.marks.chemistry;
    s1.avgmark=(s1.marks.maths+s1.marks.chemistry+s1.marks.physics+s1.marks)/4;
    if(avgmark>=90){
        scholarpercent=50;
    }
    else if(avgmark>=80 && avgmark<=89){
        s1.scholarpercent=25;
    }
    else if(avgmark>=70 && avgmark<=79){
        s1.scholarpercent=10;
    }
    else if(avgmark>=60 && avgmark<=69){
        s1.scholarpercent=5;
    }
    else{
        s1.scholarpercent=0;
    }
    s1.fees=(fees-((fees*s1.scholarpercent)/100));
    printf("Student ID: %d\nStudent Name: %s\nAverage Marks: %d\nScholarship Percent: %d\nFees after Scholarship: %d",s1.studid,s1.name,s1.avgmarks,s1.scholarpercent,s1.fees);
    return 0;
}