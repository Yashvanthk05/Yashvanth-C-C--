#include<iostream>
using namespace std;
class add{
    private:
    int a,b;
    public:
    add(int num1,int num2){
        a=num1;
        b=num2;
    }
    add(add &obj){
        a=obj.a;
        b=obj.b;
    }
    void display(){
        cout<<"Total: "<<a+b<<endl;
    }
};
int main(){
    add cal1(10,12);
    cal1.display();
    add cal2(cal1);
    cal2.display();
    return 0;
}