#include<iostream>
using namespace std;
class vehicle{
    public:
    virtual void display(){
        cout<<"This is Vehicle"<<endl;
    }
};
class truck:public vehicle{
    public:
    void display(){
        cout<<"This is Truck"<<endl;
    }
};
class car:public vehicle{
    public:
    void display(){
        cout<<"This is Car"<<endl;
    }
};
int main(){
    vehicle *ptr=NULL;
    car c1;
    truck t1;
    ptr=&c1;
    ptr->display();
    ptr=&t1;
    ptr->display();
    return 0;
}