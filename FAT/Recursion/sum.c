#include<stdio.h>
int sum(int n){
    if(n>1){
        return n+sum(n-1);
    }
    return 1;
}
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Sum of First %d Natural Numbers: %d",n,sum(n));
    return 0;
}