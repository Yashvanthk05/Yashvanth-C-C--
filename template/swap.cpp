#include<iostream>
using namespace std;
template <typename T>
void swap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=1;
    int b=2;
    ::swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
   /* char a='A';
    char b='Z';
    swap(a,b);*/
    return 0;
}