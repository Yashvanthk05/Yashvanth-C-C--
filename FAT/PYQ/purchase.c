#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the Number of Customers: ");
    scanf("%d",&n);getchar();
    char name[n][15];
    int transaction_amt[n];
    int discount[n];
    int avgamt[n];
    char temp[15];
    for(int i=0;i<n;i++){
        printf("Enter the Customer Name: ");
        scanf("%s",&name[i]);getchar();
        printf("Enter the Transaction Amount: ");
        scanf("%d",&transaction_amt[i]);getchar();
        if(transaction_amt[i]<500){
            discount[i]=5;
        }
        else if(transaction_amt[i]>=500 && transaction_amt[i]<=999){
            discount[i]=10;
        }
        else if(transaction_amt[i]>=1000 && transaction_amt[i]<=1999){
            discount[i]=15;
        }
        else if(transaction_amt[i]>=2000){
            discount[i]=20;
        }
        avgamt[i]=(transaction_amt[i]-discount[i])/10;
    }
    for(int i=0;i<n;i++){
        printf("%s ",name[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",transaction_amt[i]);
    }printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",discount[i]);
    }printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",avgamt[i]);
    }printf("\n");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(avgamt[j]>avgamt[i]){
                avgamt[i]=avgamt[i]+avgamt[j];
                avgamt[j]=avgamt[i]-avgamt[j];
                avgamt[i]=avgamt[i]-avgamt[j];
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s ",name[i]);
    }printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",avgamt[i]);
    }printf("\n");
    return 0;
}