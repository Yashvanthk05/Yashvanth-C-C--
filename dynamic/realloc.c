#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n=3;
    int *ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the Rollno:");
        scanf("%d",(ptr+i));
    }
    ptr=(int *)realloc(ptr,(n+2)*sizeof(int));
    for(int i=n;i<(n+2);i++){
        printf("Enter the Rollno:");
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<(n+2);i++){
        printf("Rollno %d: %d\n",i+1,*(ptr+i));
    }
    return 0;
}