#include<iostream>
using namespace std;
class value{
    private:
    int a,b;
    public:
    value(){
        a=0;
        b=0;
    }
    friend class sum;
};
class sum{
    public:
    void getData(value &obj){
        cout<<"Enter the Value of a: ";
        cin>>obj.a;
        cout<<"Enter the Value of b: ";
        cin>>obj.b;
    }
    void displayData(value &obj){
        cout<<"a value: "<<obj.a<<endl;
        cout<<"b value: "<<obj.b<<endl;
    }
};
int main(){
    sum s1;
    value v1;
    s1.getData(v1);
    s1.displayData(v1);
    return 0;
}