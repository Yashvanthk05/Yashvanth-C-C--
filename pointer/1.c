#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(int *p){
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if((*(p+i))>(*(p+j))){
                int temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
}
int main(){
    int arr[]={8,9,5,4,6,3,7,2,1,10};
    sort(arr);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}