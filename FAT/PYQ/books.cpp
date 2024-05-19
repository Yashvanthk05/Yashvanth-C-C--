#include<iostream>
using namespace std;
class books{
    string author[3];
    string title[3];
    float price[3];
    string publisher[3];
    int stock[3];
    public:
    books(){
        for(int i=0;i<3;i++){
            printf("Enter the Author Name: ");
            scanf("%s",&author[i]);
            printf("Enter the Title: ");
            scanf("%s",&title[i]);
            printf("Enter the Price: ");
            scanf("%.2f",&price[i]);
            printf("Enter the Publisher Name: ");
            scanf("%s",&publisher[i]);
            printf("Enter the Number of Books Available: ");
            scanf("%d",&stock[i]);
        }
    }
    void search(char *t,char *a);
}
void books::search(char *t,char *a){
    int count=0,stockin=0;
    for(int i=0;i<3;i++){
        if((strcmp(t,title[i])==0) && strcmp(a,author[i])==0){
            count++;
        }
    }
    if(count){
        printf("The Book is Available")
        for(int i=0;i<3;i++){
            if((strcmp(t,title[i])==0) && strcmp(a,author[i])==0){
                cout<<"Book Title: "<<title[i]<<endl;
                cout<<"Author Name: "<<author[i]<<endl;
                cout<<"Price: "<<price[i]<<endl;
                cout<<"Publisher Name: "<<publisher[i]<<endl;
                cout<<"No. of Stocks: "<<stock[i]<<endl;
                printf("Enter the No. of Books you want: ");
                scanf("%d",&stockin);
                if(stockin>stock[i]){
                    printf("Required Number of Copies is not in Stock");
                }
                else{
                    printf("The Book Stocks are available");
                }
            }
        }
    }
    else{
        printf("The Book is not Available");
    }
}
int main(){
    books obj;
    char title[15],author[15];
    printf("Enter the Title and the Author name to be searched: ");
    scanf("%s %s",&title,&author);
    books.search(title,author);
    return 0;
}
switch (expression)
{
case /* constant-expression */:
    /* code */
    break;

default:
    break;
}