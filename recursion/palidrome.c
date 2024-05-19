#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
bool pali(int n){
    if(n==reverse(n)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if(pali(num)){
        printf("%d is a palindrome number",num);
    }
    else{
        printf("%d is not a palindrome number",num);
    }
    return 0;
}