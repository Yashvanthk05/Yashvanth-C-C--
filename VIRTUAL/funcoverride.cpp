#include<iostream>
using namespace std;
class cal{
    protected:
    int a,b;
    public:
    void add(){
        cout<<"Enter the Two Numbers:";
        cin>>a>>b;
        cout<<"Result: "<<a+b<<endl;
    }
};
class cal_der:public cal{
    protected:
    int c;
    public:
    void add(){
        cout<<"Enter the Three Numbers: ";
        cin>>a>>b>>c;
        cout<<"Result: "<<a+b+c<<endl;
    }
};
int main(){
    cal c1;
    c1.add();
    cal_der c2;
    c2.add();
    return 0;
}