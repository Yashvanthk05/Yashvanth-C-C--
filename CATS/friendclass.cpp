#include<iostream>
using namespace std;
class B;
class A{
    private:
    int x;
    friend  B;
};
class B{
    public:
    A obj;
    void getData(){
        cout<<"Enter the Number: ";
        cin>>obj.x;
    }
    void display(){
        cout<<"Number: "<<obj.x;
    }
};
int main(){
    B obj1;
    obj1.getData();
    obj1.display();
    return 0;
}