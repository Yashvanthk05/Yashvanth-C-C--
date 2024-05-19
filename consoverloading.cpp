#include<iostream>
using namespace std;
class sum{
    private:
    int num1,num2;
    public:
    sum(){
        cout<<"Enter the Two Numbers: ";
        cin>>num1>>num2;
    }
    sum(int a,int b){
        num1=a;
        num2=b;
    }
    sum(sum &objval){
        num1=objval.num1;
        num2=objval.num2;
    }
    void add(){
        cout<<num1+num2<<endl;
    }
};
int main(){
    sum obj1;
    sum obj2(10,20);
    sum obj3(obj1);
    obj1.add();
    obj2.add();
    obj3.add();
    return 0;
}