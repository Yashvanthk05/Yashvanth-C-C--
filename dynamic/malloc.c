#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int *ptr=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        printf("Enter the Number:");
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<5;i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}