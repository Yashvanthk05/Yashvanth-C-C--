#include<stdio.h>
#include<stdlib.h>
int rev=0;
int reverse(int n){
    if (n>0){
        rev=rev*10+n%10;
        n/=10;
        reverse(n);
    }
    else{
        return rev;
    }
}
int main(){
    int num;
    printf("Enter the Number to be Reversed: ");
    scanf("%d",&num);
    printf("The Reversed Number: %d",reverse(num));
    return 0;
}