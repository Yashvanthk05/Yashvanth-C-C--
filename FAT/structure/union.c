#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct store{
    double price;
    union product{
        struct book{
            char authorname[15];
            char genre[10];
        }book;
        struct phone{
            char model[20];
            int imei;
        }phone;
    }product;
};
int main(){
    struct store s[2];
    printf("Enter the Book Price, Author name , Genre: ");
    scanf("%lf %s %s",&s[0].price,&s[0].product.book.authorname,&s[0].product.book.genre);
    printf("Enter the Phone Price, Phone Model, Phone IMEI: ");
    scanf("%lf %s %d",&s[1].price,&s[1].product.phone.model,&s[1].product.phone.imei);
    printf("BOOK PRICE: %lf\nAUTHOR NAME: %s\nGENRE: %s\nPHONE PRICE: %lf\nPHONE MODEL: %s\nPHONE IMEI: %d\n",s[0].price,s[0].product.book.authorname,s[0].product.book.genre,s[1].price,s[1].product.phone.model,s[1].product.phone.imei);
    return 0;
}