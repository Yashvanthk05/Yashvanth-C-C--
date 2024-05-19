#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool prime(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if(prime(num)){
        printf("%d is a prime number",num);
    }
    else{
        printf("%d is not a prime number",num);
    }
    return 0;
}