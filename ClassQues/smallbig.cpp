#include<iostream>
using namespace std;
template<typename T>
void bigsmall(T arr[],int n){
    T max=arr[0];
    T min=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Maximum Element: "<<max<<endl;
    cout<<"Minimum Element: "<<min<<endl; 
}
int main(){
    cout<<"For Number Array:"<<endl;
    int arr[]={54,54,3,4,52,6,7,8,9,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    bigsmall(arr,n);
    cout<<"\nFor Character Array:"<<endl;
    char arr1[]={'a','b','c','d','e','f','g','h'};
    int len=sizeof(arr1)/sizeof(arr1[0]);
    bigsmall(arr1,len);
    return 0;
}