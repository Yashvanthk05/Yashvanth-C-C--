#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the Limit: ");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("Calloc Memory is not allocated");
    }
    else{
        for(int i=0;i<n;i++){
            printf("Enter the Number: ");
            scanf("%d",(ptr+i));
        }
        for(int i=0;i<n;i++){
            printf("%d ",*(ptr+i));
        }
    }
    return 0;
}