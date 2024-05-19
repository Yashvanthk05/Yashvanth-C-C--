#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct market{
    int price;
    union product{
        struct book{
            char author[15];
            char genre[15];
        }book;
        struct phone{
            char model[15];
            char processor[15];
        }phone;
    }product;
}market;
int main(){
    struct market m1;
    struct market *ptr=&m1;
    printf("Enter the Price:");
    scanf("%d",&ptr->price);
    printf("Enter the Book Author:");
    scanf("%s",&ptr->product.book.author);
    printf("Enter the Book Genre:");
    scanf("%s",&ptr->product.book.genre);
    printf("Price: %d\nBook Author: %s\nBook Genre: %s",ptr->price,ptr->product.book.author,ptr->product.book.genre);
    return 0;
}