#include<iostream>
using namespace std;
class cal{
    public:
    int a,b;
    cal(){
        cout<<"Enter the Number 1:";
        cin>>a;
        cout<<"Enter the Number 2:";
        cin>>b;
    }
    void operator +(cal obj2){
        cout<<a+obj2.a<<endl;
        cout<<b+obj2.b<<endl;
    }
};
int main(){
    cal obj1;
    cal obj2;
    obj1+obj2;
    return 0;
}