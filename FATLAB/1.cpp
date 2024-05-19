#include<iostream>
using namespace std;
void swap_value(){
    int num1,num2;
    cout<<"Enter the Two Numbers: ";
    cin>>num1>>num2;
    num1+=num2;
    num2=num1-num2;
    num1-=num2;
    cout<<num1<<endl;
    cout<<num2<<endl;
}
void swap_refer(){
    int num1,num2;
    cout<<"Enter the Two Numbers: ";
    cin>>num1>>num2;
    int *p1=&num1;
    int *p2=&num2;
    *p1+=*p2;
    *p2=*p1-*p2;
    *p1-=*p2;
    cout<<num1<<endl;
    cout<<num2<<endl;
}
void swap_pointer(){
    int num1,num2;
    cout<<"Enter the Two Numbers: ";
    cin>>num1>>num2;
    int *p1=&num1;
    int *p2=&num2;
    int *temp;
    temp=p1;
    p1=p2;
    p2=temp;
    cout<<num1<<endl;
    cout<<num2<<endl;
}
int main(){
    swap_value();
    swap_refer();
    swap_pointer();
    return 0;
}