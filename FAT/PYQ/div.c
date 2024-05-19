#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* divisible(int *a,int k,int n){
    for(int i=0;i<n;i++){
        if(*(a+i)%k==0){
            *(a+i)=0;
        }
        else{
            *(a+i)=1;
        }
    }
    return a;
}
int main(){
    int n;
    printf("Enter the No. of Elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the Element of the Array: ");
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the Number to Check Divisibility: ");
    scanf("%d",&k);
    int *ptr=divisible(arr,k,n);
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}