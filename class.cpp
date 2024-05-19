#include<iostream>
using namespace std;
class circle
{
private:
    float radius;
public:
    void area()
    {
        cout<<"Enter the Radius:";
        cin>>radius;
        cout<<"Area of Circle is "<<3.14*radius*radius<<endl;
    }
    void circum()
    {
        cout<<"The Circumference of Circle is "<<2*3.14*radius<<endl;
    }
};

int main()
{
    circle c1;
    c1.area();
    c1.circum();
    return 0;
}
