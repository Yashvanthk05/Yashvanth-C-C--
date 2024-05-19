#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the Number of Values:");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory Not Available!!");
    }
    //writing
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    //reading
    printf("\n\n");
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}