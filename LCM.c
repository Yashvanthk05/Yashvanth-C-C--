#include<stdio.h>
int LCM(int a,int b){
    int max=(a>b)?a:b;
    while(1){
        if ((max%a==0)&&(max%b==0)){
            return max;
        }
        max++;
    }
}
int main(){
    int a,b;
    printf("Enter the Two Numbers: ");
    scanf("%d %d",&a,&b);
    printf("The LCM of %d & %d is %d",a,b,LCM(a,b));
}