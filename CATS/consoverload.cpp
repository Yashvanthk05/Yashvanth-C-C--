#include<iostream>
using namespace std;
class add{
    private:
    int a,b;
    public:
    add(){
        a=0;
        b=0;
        cout<<"Total: "<<a+b<<endl;
    }
    add(int num1,int num2){
        a=num1;
        b=num2;
        cout<<"Total: "<<a+b<<endl;
    }
    add(add &obj){
        a=obj.a;
        b=obj.b;
        cout<<"Total: "<<a+b<<endl;
    }
};
int main(){
    add obj1;
    add obj2(10,15);
    add obj3(obj2);
    return 0;
}