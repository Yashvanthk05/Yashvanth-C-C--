#include<stdio.h>
int factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }
    return 1;
}
int main(){
    int n,r;
    crops:
    printf("Enter the No. of Crops to be Planted: ");
    scanf("%d",&r);
    if(r>6){
        printf("Maximum Number of Crops is Restricted to 6!!\n");
        goto crops;
    }
    fields:
    printf("Enter the No of Fields: ");
    scanf("%d",&n);
    if(n>10){
        printf("Maximum Number of Fields is Restricted to 10!!\n");
        goto fields;
    }
    int combinations=(factorial(n))/(factorial(r)*factorial(n-r));
    printf("Total Number of Combinations Possible: %d\n",combinations);
    return 0;
}