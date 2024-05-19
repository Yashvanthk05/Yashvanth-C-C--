#include<iostream>
using namespace std;
class B;
class A{
    private:
    int x=10;
    friend B;
};
class B{
    public:
    B(A &obj){
        cout<<"NUM: "<<obj.x<<endl;
    }
};
int main(){
    A obj1;
    B obj(obj1);
    return 0;
}