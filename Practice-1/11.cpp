#include<iostream>
#include<cmath>
using namespace std;
class circle{
    float radius,area,diameter;
    public:
    circle(){
        radius=1;
    }
    void setRadius(){
        radius=10;
    }
    void getRadius(){
        cout<<"Enter the Radius: ";
        cin>>radius;
    }
    void computeDiameter(){
        diameter=2*radius;
    }
    void computerArea(){
        area=M_PI*radius*radius;
    }
    void display(){
        cout<<"Radius: "<<radius<<endl;
        cout<<"Diameter: "<<diameter<<endl;
        cout<<"Area: "<<area<<endl;
    }
};
int main(){
    
}