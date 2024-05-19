#include<iostream>
using namespace std;
class circle{
    private:
    float radius;
    public:
    circle(float radius){
        cout<<"Area of the Circle: "<<(22*radius*radius)/7;
    }
};
int main(){
    float radius;
    cout<<"Enter the Radius: ";
    cin>>radius;
    circle obj(radius);
    return 0;
}