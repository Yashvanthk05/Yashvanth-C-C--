#include<stdio.h>
int main(){
    int arr[]={2,8,7,4};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(arr[i]>arr[j]){
                printf("(%d,%d) ",arr[i],arr[j]);
            }
        }
    }
}