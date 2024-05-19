#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the Number of Students: ");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("Memory is not allocated!!");
    }
    else{
        for(int i=0;i<n;i++){
            printf("Enter the Student Rollno: ");
            scanf("%d",(ptr+i));
        }
        for(int i=0;i<n;i++){
            printf("Student %d: %d\n",i+1,*(ptr+i));
        }
    }
    return 0;
}