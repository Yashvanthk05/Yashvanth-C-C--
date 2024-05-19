#include<stdio.h>
void swap(int *a,int *b){
    *a+=*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main(){
    int a,b;
    printf("Enter the Two Numbers: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}