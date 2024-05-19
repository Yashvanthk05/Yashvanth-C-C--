#include<iostream>
using namespace std;
class cal{
    public:
    int num1,num2;
    cal(){
        num1=0;
        num2=0;
    }
    cal(int a,int b){
        num1=a;
        num2=b;
    }
    cal operator +(cal obj2){
        cal obj3;
        obj3.num1=num1+obj2.num1;
        obj3.num2=num2+obj2.num2;
        return obj3;
    }
    void display(){
        cout<<num1<<endl;
        cout<<num2<<endl;
    }
};
int main(){
    cal obj1(10,11);
    cal obj2(12,13);
    cal obj3=obj1+obj2;
    obj3.display();
    return 0;
}