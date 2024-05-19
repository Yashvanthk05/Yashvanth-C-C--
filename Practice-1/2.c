#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    double price;
    union{
        char bookname[20];
        char bookauthor[20];
    }*book;
    union{
        int quantity;
        char category[20];
    }*grocery;
};
typedef struct student stud;
int main(){
    stud item1,*ptr;
    ptr=&item1;
    int choice;
    printf("Enter the Choice (1)Books/(2)Grocery: ");
    scanf("%d",choice);
    if(choice==1){
        printf("Enter the Book Price: ");scanf("%lf",&ptr->price);
        printf("Enter the Book Name: ");scanf("%s",&ptr->book->bookname);
        printf("Enter the Book Author Name: ");scanf("%s",&ptr->book->bookauthor);
    }
    else if(choice==2){
        printf("Enter the Grocery Item Price: ");scanf("%lf",&ptr->price);
        printf("Enter the Grocery Item Quantity: ");scanf("%s",&ptr->grocery->quantity);
        printf("Enter the Grocery Item Category: ");scanf("%s",&ptr->grocery->category);
    }
}