#include<stdio.h>
int revnum=0;
int rev(int n){
    if(n>0){
        revnum=revnum*10+n%10;
        n/=10;
        rev(n);
    }
    return revnum;
}
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    if(n==rev(n)){
        printf("%d is an palindrome number",n);
    }
    else{
        printf("%d is not a palindrome number",n);
    }
    return 0;
}