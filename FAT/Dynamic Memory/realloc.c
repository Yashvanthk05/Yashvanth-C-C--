#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the Limit: ");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Malloc Memory is not Allocated");
        exit(1);
    }
    for(int i=0;i<n;i++){
        printf("Enter the Number: ");
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    ptr=(int *)realloc(ptr,(n+2)*sizeof(int));
    for(int i=n;i<(n+2);i++){
        printf("Enter the Number: ");
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<(n+2);i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}