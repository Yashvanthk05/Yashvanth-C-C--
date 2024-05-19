#include<iostream>
using namespace std;
class shape{
    public:
    float length,breadth,radius;
};
class rectangle:public shape{
    public:
    void getdata(){
        cout<<"Enter the Length & Breadth: ";
        cin>>length>>breadth;
    }
    void area(){
        cout<<"Area of Rectangle: "<<length*breadth<<endl;
    }
};
class circle:public shape{
    public:
    void getdata(){
        cout<<"Enter the Radius: ";
        cin>>radius;
    }
    void area(){
        cout<<"Area of Circle: "<<(22*radius*radius)/7<<endl;
    }
};
class square:public shape{
    public:
    void getdata(){
        cout<<"Enter the Side: ";
        cin>>length;
    }
    void area(){
        cout<<"Area of Square: "<<length*length<<endl;
    }
};
int main(){
    rectangle obj1;
    obj1.getdata();
    obj1.area();
    circle obj2;
    obj2.getdata();
    obj2.area();
    square obj3;
    obj3.getdata();
    obj3.area();
    return 0;
}