#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter the Number: ";
    cin>>num1;
    int *temp;
    temp=&num1;
    (*temp)++;
    cout<<*temp;
    return 0;
}