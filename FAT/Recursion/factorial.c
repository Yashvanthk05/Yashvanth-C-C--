#include<stdio.h>
int factorial(int n){
    if(n>0){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Factorial of %d: %d",n,factorial(n));
    return 0;
}