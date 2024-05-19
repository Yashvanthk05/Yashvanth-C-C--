#include<iostream>
#include<cmath>
using namespace std;
class circle{
    float radius;
    public:
    void getData(){
        cout<<"Enter the Radius: ";
        cin>>radius;
    }
    float area(){
        return (M_PI*pow(radius,2));
    }
    float circumference(){
        return (2*M_PI*radius);
    }
    void display(float x){
        cout<<x<<endl;;
    }
};
int main(){
    circle c1;
    c1.getData();
    c1.display(c1.area());
    c1.display(c1.circumference());
    return 0;
}