#include<iostream>
using namespace std;
class sum{
    private:
    int num1,num2,total;
    public:
    sum(int a,int b){
        num1=a;
        num2=b;
        total=num1+num2;
        cout<<"Sum: "<<total<<endl;
    }
    sum(sum &objval){
        num1=objval.num1;
        num2=objval.num2;
        cout<<"Sum: "<<num1 +num2<<endl;
    }
};
int main(){
    int a,b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;
    sum obj1(a,b);
    sum obj2(obj1);
    return 0;
}