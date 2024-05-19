#include<iostream>
using namespace std;
class calculator{
    private:
    int num1,num2;
    public:
    inline int add(int x,int y=0){
        num1=x;
        num2=y;
        return num1+num2;
    }
    inline int subtract(int x,int y=0){
        num1=x;
        num2=y;
        return num1-num2;
    }
    inline int multiply(int x,int y=1){
        num1=x;
        num2=y;
        return num1*num2;
    }
    inline int divide(int x,int y=1){
        num1=x;
        num2=y;
        return num1/num2;
    }
    void displayResult(int result){
        cout<<"Result: "<<result<<endl;
    }
};
int main(){
    calculator c1;
    c1.displayResult(c1.add(10));
    c1.displayResult(c1.add(10,20));
    c1.displayResult(c1.subtract(5));
    c1.displayResult(c1.subtract(15,5));
    c1.displayResult(c1.multiply(12));
    c1.displayResult(c1.multiply(12,2));
    c1.displayResult(c1.divide(12));
    c1.displayResult(c1.divide(12,2));
    return 0;
}