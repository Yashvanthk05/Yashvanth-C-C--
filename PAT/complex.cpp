#include<iostream>
using namespace std;
class complex{
    public:
    int real,img;
    complex(){
        cout<<"Enter the Real Number:";
        cin>>real;
        cout<<"Enter the Imagenary Number:";
        cin>>img;
    }
    void operator +(complex obj){
        cout<<real+obj.real<<endl;
        cout<<img+obj.img<<endl;
    }
    void operator -(complex obj){
        cout<<real-obj.real<<endl;
        cout<<img-obj.img<<endl;
    }
    void operator *(complex obj){
        cout<<((real*obj.real)-(img*obj.img))<<endl;
        cout<<(real*obj.img+img*obj.real)<<endl;
    }
    void operator /(complex obj){
        cout<<((real*obj.real +img*obj.img)/((obj.real)*(obj.real) + (obj.img)*(obj.img)))<<endl;
        cout<<((img*obj.real - obj.img*real)/((obj.real)*(obj.real) + (obj.img)*(obj.img)))<<endl;
    }
};
int main(){
    complex obj1;
    complex obj2;
    obj1+obj2;
    obj1-obj2;
    obj1*obj2;
    obj1/obj2;
    return 0;
}