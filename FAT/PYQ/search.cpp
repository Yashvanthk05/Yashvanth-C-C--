#include<iostream>
using namespace std;
template<typename T>
void search(T arr[],T element){
    int len=0,count=0;
    while(arr[len]!='\0'){
        len++;
    }
    for(int i=0;i<len;i++){
        if(arr[i]==element){
            count++;
            cout<<i<<endl;
        }
    }
    if(count==0){
        cout<<"Element Not Found"<<endl;
    }
}
int main(){
    int arr[]={1,3,4,5,6,8,9,10};
    int element=10;
    search(arr,element);
    char arr1[]={'a','b','c','d','e','f'};
    char element1='c';
    search(arr1,element1);
    return 0;
}