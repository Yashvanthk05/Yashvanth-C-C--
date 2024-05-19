#include<iostream>
using namespace std;
class num{
    float x;
    public:
    num(float num1){
        x=num1;
    }
    void operator +(){
        x+=5;
        cout<<x<<endl;
    }
    void operator -(){
        x-=2;
        cout<<x<<endl;
    }
    void operator *(){
        x*=(1/3);
        printf("%0.2f\n",x);
    }
};
int main(){
    num n1(7);
    +n1;
    -n1;
    *n1;
    return 0;
}