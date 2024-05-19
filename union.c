#include<stdio.h>
typedef struct store{
    double price;
    union{
        struct{
            char *model;
            char *color;
        }phone;
        struct{
            char *title;
            char *author;
        }book;
    }product;
}store;
void displayBook(store s1){
    printf("Book Title: %s\n",s1.product.book.title);
    printf("Book Author: %s\n",s1.product.book.author);
    printf("Book Price: %0.2lf\n",s1.price);
}
void displayPhone(store s1){
    printf("Phone Model: %s\n",s1.product.phone.model);
    printf("Phone Color: %s\n",s1.product.phone.color);
    printf("Phone Price: %0.2lf\n",s1.price);
}
int main(){
    store s1;
    s1.price=399;
    s1.product.book.title="Harry Potter";
    s1.product.book.author="J.K.Rowling";
    displayBook(s1);
    return 0;
}