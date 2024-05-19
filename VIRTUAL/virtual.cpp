#include<iostream>
using namespace std;
class car{
    public:
    virtual void display(){
        cout<<"I have a Car"<<endl;
    }
};
class BMW: public car{
    public:
    void display(){
        cout<<"I have BMW Car"<<endl;
    }
};
int main(){
    car *ptr;
    BMW b1;
    ptr= &b1;
    ptr->display();
    return 0;
}