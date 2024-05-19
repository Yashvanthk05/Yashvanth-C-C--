#include<iostream>
using namespace std;
class sum{
    int a,b,result;
    public:
    sum(){
        a=0;
        b=0;
        result=a+b;
    }
    sum(int num1,int num2){
        a=num1;
        b=num2;
        result=a+b;
    }
    sum(sum &obj){
        a=obj.a;
        b=obj.b;
        result=a+b;
    }
    ~sum(){
        cout<<"Memory Cleared!!"<<endl;
    }
    void display(){
        cout<<"Number 1: "<<a<<endl;
        cout<<"Number 2: "<<b<<endl;
        cout<<"Result: "<<result<<endl;
    }
};
int main(){
    sum obj1;
    sum obj2(10,20);
    sum obj3(obj2);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}