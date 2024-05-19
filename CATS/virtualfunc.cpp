#include<iostream>
using namespace std;
class base{
    public:
    void display(){
        cout<<"This is Base Class"<<endl;
    }
};
class derived:public base{
    public:
    virtual void display(){
        cout<<"This is Derived Class"<<endl;
    }
};
int main(){
    base *ptr;
    derived d;
    ptr=&d;
    ptr->display();
    d.display();
    return 0;
}