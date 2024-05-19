#include<stdio.h>
int isone(int n){
    if(n>0){
        if(n%10==1){
            return 1+isone(n/10);
        }
        return isone(n/10);
    }
    return 0;
}
int main(){
    int n,count=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        count+=isone(i);
    }
    printf("%d",count);
    return 0;
}