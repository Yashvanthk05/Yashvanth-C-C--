#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int rollno;
    int marks[5];
};
int main(){
    int n;
    printf("Enter the No of Students: ");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
        printf("Enter the Name: ");
        scanf("%s",&s[i].name);
        printf("Enter the Rollno: ");
        scanf("%d",&s[i].rollno);
        for(int j=0;j<5;j++){
            printf("Enter the Mark %d: ",j+1);
            scanf("%d",&s[i].marks[j]);
        }
    }
    int avg[n],max[n],min[n];
    for(int i=0;i<n;i++){
        avg[i]=0;
        max[i]=s[i].marks[0];
        min[i]=s[i].marks[0];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            if(max[i]<s[i].marks[j]){
                max[i]=s[i].marks[j];
            }
            if(min[i]>s[i].marks[j]){
                min[i]=s[i].marks[j];
            }
            avg[i]+=s[i].marks[j];
        }
        avg[i]/=5;
    }
    for(int i=0;i<n;i++){
        printf("Student %d:\nAverage: %d\nMaximum Mark: %d\nMinimum Mark: %d\n",i+1,avg[i],max[i],min[i]);
    }
    
    return 0;
}