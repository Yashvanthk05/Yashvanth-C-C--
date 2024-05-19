#include<iostream>
using namespace std;
template<class T1,class T2>
class cal{
    T1 x;
    T2 y;
    public:
    cal(T1 num1,T2 num2){
        x=num1;
        y=num2;
    }
    void add(){
        cout<<"Addition: "<<x+y<<endl;
    }
    void sub(){
        cout<<"Subtraction: "<<x-y<<endl;
    }
    void mul(){
        cout<<"Multiplication: "<<x*y<<endl;
    }
    void div(){
        cout<<"Division: "<<x/y<<endl;
    }
};
int main(){
    cal obj1(3,2);
    cal obj2(6.4,3);
    obj1.add();
    obj2.add();
    obj1.sub();
    obj2.sub();
    obj1.mul();
    obj2.mul();
    obj1.div();
    obj2.div();
    return 0;
}