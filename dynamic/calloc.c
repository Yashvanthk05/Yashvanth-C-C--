#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int *ptr=(int *)calloc(3,sizeof(int));
    for(int i=0;i<5;i++){
        printf("Enter the RollNO:");
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<5;i++){
        printf("Rollno %d: %d\n",i+1,*(ptr+i));
    }
    return 0;
}