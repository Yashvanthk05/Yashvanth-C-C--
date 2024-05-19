#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the Number of students: ");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory Not Allocated!!");
    }
    else{
        printf("Memory Allocated Successfully!!");
        for (int i=0;i<n;i++){
            printf("Enter the Student Rollno: ");
            scanf("%d",(ptr+i));
        }
        for(int i=0;i<n;i++){
            printf("Student %d: %d\n",i+1,*(ptr+i));
        }
    }
    return 0;
}