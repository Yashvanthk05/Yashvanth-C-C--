#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the Limit: ");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("Memory Not allocated!!");
    }
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    int x;
    printf("Enter the No. of Extras to be Stored:");
    scanf("%d",&x);
    ptr=(int *)realloc(ptr,(n+x)*sizeof(int));
    for(int i=n;i<(n+x);i++){
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<(n+x);i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}