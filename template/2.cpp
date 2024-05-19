#include<iostream>
using namespace std;
template<class T>
void swap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
template<class T>
void sort(T a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                ::swap(a[i],a[j]);
            }
        }
    }
}
int main(){
    int a[]={10,9,8,7,6,5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    ::sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}