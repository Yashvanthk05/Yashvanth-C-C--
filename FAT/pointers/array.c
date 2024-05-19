#include<stdio.h>
int main(){
    int arr[10];
    int *p=arr;
    for(int i=0;i<10;i++){
        printf("Enter the Number: ");
        scanf("%d",(p+i));
    }
    for(int i=0;i<10;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}