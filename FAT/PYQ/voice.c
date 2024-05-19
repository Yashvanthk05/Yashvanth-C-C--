#include<stdio.h>
#include<math.h>
int even_square_sum(int arr[],int len){
    int sum=0;
    for(int i=0;i<len;i++){
        if(i%2==0){
            sum+=pow(arr[i],2);
        }
    }
    return sum;
}
int odd_cube_sum(int arr[],int len){
    int sum=0;
    for(int i=0;i<len;i++){
        if(i%2!=0){
            sum+=pow(arr[i],3);
        }
    }
    return sum;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum_even_square=even_square_sum(arr,len);
    int sum_odd_cube=odd_cube_sum(arr,len);
    for(int i=0;i<len;i++){
        if(i%2==0){
            arr[i]+=sum_odd_cube;
        }
        else{
            arr[i]+=sum_even_square;
        }
    }
    printf("Even Square Sum: %d\n",sum_even_square);
    printf("Odd Cube Sum: %d\n",sum_odd_cube);
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}