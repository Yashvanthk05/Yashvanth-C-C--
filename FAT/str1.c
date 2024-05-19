#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    printf("Enter the Name: ");
    scanf("%s",&name);
    printf("%s\n",strrev(strupr(name)));
    printf("%s",name);
}