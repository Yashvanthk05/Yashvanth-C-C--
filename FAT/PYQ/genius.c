#include<stdio.h>
#include<stdlib.h>
int main(){
    int marks[4];
    for(int i=0;i<4;i++){
        printf("Enter the Test %d Mark: ",i+1);
        scanf("%d",&marks[i]);
    }
    int total=0;
    for(int i=0;i<4;i++){
        total+=marks[i];
    }
    if(total>=180){
        printf("Eligible for taking Genius-Level Test\n");
        if(marks[0]>(8*18) && marks[1]>(8*18) && marks[2]>(8*18) && marks[3]>(8*18)){
            printf("Eligible for Taking Genius Level 1 Test\n");
        }
        else{
            printf("Eligible for Taking Genius Level 2 Test\n");
        }
    }
    else{
        printf("Not Eligible for Taking Genius Level Test\n");
    }
    return 0;
}