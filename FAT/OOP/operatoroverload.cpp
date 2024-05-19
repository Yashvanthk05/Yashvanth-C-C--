#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    complex(){
        real=0;
        img=0;
    }
    complex(int re,int im){
        real=re;
        img=im;
    }
    complex operator +(complex obj){
        complex result;
        result.real=real+obj.real;
        result.img=img+obj.img;
        return result;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    complex c1(1,2);
    c1.display();
    complex c2(5,4);
    c2.display();
    complex c3;
    c3=c1+c2;
    c3.display();
    return 0;
}