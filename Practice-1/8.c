#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*Define a structure “Complex” (typedef) to read two complex numbers and perform 
addi5on, subtrac5on of these two complex numbers and display the result*/
typedef struct complex_num{
    float real;
    float img;
}complex;
complex add(complex num1,complex num2){
    complex result;
    result.real=num1.real+num2.real;
    result.img=num1.img+num2.img;
    return result;
}
complex subtract(complex num1,complex num2){
    complex result;
    result.real=num1.real-num2.real;
    result.img=num1.img-num2.img;
    return result;
}
void display(complex num){
    printf("The Result is: %f + %f\n",num.real,num.img);
}
int main(){
    complex num1,num2;
    printf("Enter the Real part of Number 1: ");scanf("%f",&num1.real);
    printf("Enter the Imagenary part of Number 1: ");scanf("%f",&num1.img);
    printf("Enter the Real part of Number 2: ");scanf("%f",&num2.real);
    printf("Enter the Imagenary part of Number 2: ");scanf("%f",&num2.img);
    printf("Addition: \n");
    display(add(num1,num2));
    printf("Subtraction: \n");
    display(subtract(num1,num2));
    return 0;
}