#include<iostream>
using namespace std;
template<typename T>
void average(T arr[],int len){
    T avg=NULL;
    for(int i=0;i<len;i++){
        avg+=arr[i];
    }
    avg=avg/len;
    cout<<"Average: "<<avg<<endl;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    average(arr,10);
    float arr1[]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
    average(arr1,sizeof(arr1)/sizeof(arr1[0]));
    char arr2[]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    average(arr2,sizeof(arr2)/sizeof(arr2[0]));
    return 0;
}