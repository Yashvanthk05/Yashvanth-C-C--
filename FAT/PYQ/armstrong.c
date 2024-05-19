#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isarmstrong(int n){
    int sum=0;
    int num=n;
    while(num>0){
        sum+= pow(num%10,3);
        num=num/10;
    }
    if(n==sum){
        return 1;
    }
    return 0;
}
int main(){
    int year;
    printf("Enter your birth year: ");
    scanf("%d",&year);
    printf("The Armstrong Numbers are:\n");
    for(int i=0;i<year;i++){
        if(isarmstrong(i)){
            printf("%d ",i);
        }
    }
    return 0;
}