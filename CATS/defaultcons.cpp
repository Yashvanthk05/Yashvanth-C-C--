#include<iostream>
using namespace std;
class add{
    private:
    int a,b,c;
    public:
    add(){
        a=0;
        b=0;
    }
    void addition(int a,int b){
        c=a+b;
        cout<<"Total: "<<c;
    }
};
int main(){
    add a1;
    a1.addition(10,15);
    return 0;
}