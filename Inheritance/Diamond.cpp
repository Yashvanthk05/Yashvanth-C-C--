#include<iostream>
using namespace std;
class A{
    public:
    void displayA(){
        cout<<"Displaying A Method"<<endl;
    }
};
class B:virtual public A{
    public:
    void displayB(){
        cout<<"Displaying B Method"<<endl;
    }
};
class C:virtual public A{
    public:
    void displayC(){
        cout<<"Displaying C Method"<<endl;
    }
};
class D:public B,public C{
    public:
    void displayD(){
        cout<<"Displaying D Method"<<endl;
    }
};
int main(){
    D obj;
    //obj.displayA(); ambiguous error when virtual memory is not created
    obj.displayA();
    return 0;
}