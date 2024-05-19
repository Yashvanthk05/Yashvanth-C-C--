#include<iostream>
using namespace std;
class vehicle{
    public:
    string model;
    string name;
    vehicle(){
        cout<<"Enter the Vehicle Name: ";
        cin>>name;
        cout<<"Enter the Vehicle Model: ";
        cin>>model;
    }
    void display(){
        cout<<"NAME: "<<name<<endl;
        cout<<"MODEL: "<<model<<endl;
    }
};
class car:public vehicle{
    public:
    int capacity;
    string type;
    car(){
        cout<<"Enter the Car Type: ";
        cin>>type;
        cout<<"Enter the Capacity: ";
        cin>>capacity;
    }
    void display(){
        cout<<"NAME: "<<name<<endl;
        cout<<"MODEL: "<<model<<endl;
        cout<<"TYPE: "<<type<<endl;
        cout<<"CAPACITY: "<<capacity<<endl;
    }
};
int main(){
    car c1;
    c1.display();
    return 0;
}