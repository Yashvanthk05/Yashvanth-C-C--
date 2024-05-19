#include<iostream>
using namespace std;
template <class T1,class T2>
class cal{
    T1 a;
    T2 b;
    public:

    cal(T1 num1,T2 num2){
        a=num1;
        b=num2;
        cout<<"Result: "<<a+b<<endl;
    }
};
int main(){
    cal <int,int> c1(5,2);
    cal <float,float> c2(2.1,3.4);
    cal <float,int> c3(5.33,1);
    return 0;
}