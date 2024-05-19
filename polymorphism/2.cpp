#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(){
        cout<<"Enter the Real Number: ";
        cin>>real;
        cout<<"Enter the Imagenary Number: ";
        cin>>img;
    }
    void operator +(complex obj){
        cout<<real+obj.real<<endl;
        cout<<img+obj.img<<endl;
    }
};
int main(){
    complex c1;
    complex c2;
    c1+c2;
    return 0;
}