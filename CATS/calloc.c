#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the Number of Values to be Stored:");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("Memory is not allocated!!");
    }
    //writing
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    //reading
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}