#include<iostream>
using namespace std;
/*
Default Constructor
Parametersized Constructor
Copy Constructor
*/
class volume{
    private:
    int radius;
    public:
    volume(){
        cout<<"Enter the Radius: ";
        cin>>radius;
    }
    void display(){
        cout<<"Volume of the Sphere is "<<(4*3.14*radius*radius*radius)/3;
    
    }
};
int main(){
    volume obj;
    obj.display();
    return 0;
}