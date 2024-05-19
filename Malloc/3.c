#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the Number of Students: ");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("Memory Not Allocated!!");
    }
    else{
        for(int i=0;i<n;i++){
            printf("Enter the RollNO: ");
            scanf("%d",(ptr+i));
        }
        ptr=(int *)realloc(ptr,(n+2)*sizeof(int));
        for(int i=n;i<(n+2);i++){
            printf("Enter the RollNO: ");
            scanf("%d",(ptr+i));
        }
        for (int i=0;i<(n+2);i++){
            printf("Student %d: %d\n",i+1,*(ptr+i));
        }
    }    
    return 0;
}