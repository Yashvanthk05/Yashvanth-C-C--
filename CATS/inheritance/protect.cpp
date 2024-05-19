#include<iostream>
using namespace std;
class cal{
    protected:
    int a,b;
};
class sum:public cal{
    public:
    void getData(){
        cout<<"Enter the Number 1: ";
        cin>>a;
        cout<<"Enter the Number 2: ";
        cin>>b;
    }
    void display(){
        cout<<"Total: "<<a+b;
    }
};
int main(){
    sum s1;
    s1.getData();
    s1.display();
    return 0;
}