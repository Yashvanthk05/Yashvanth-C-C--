#include<iostream>
using namespace std;
class vehicle{
    public:
    virtual void display(){
        cout<<"This is Vehicle"<<endl;
    }
};
class car:public vehicle{
    public:
    void display(){
        cout<<"This is Car"<<endl;
    }
};
class truck:public vehicle{
    public:
    void display(){
        cout<<"This is Truck"<<endl;
    }
};
int main(){
    vehicle *ptr=NULL;
    car c;
    truck t;
    ptr=&c;
    ptr->display();
    ptr=&t;
    ptr->display();
    return 0;
}