#include<iostream>
using namespace std;
class shape{
    public:
    virtual void calculateArea(){
        cout<<"Base Class Intialisation"<<endl;
    }
    virtual void calculatePerimeter(){
        cout<<"Base Class Initialisation"<<endl;
    }
};
class rectangle:public shape{
    public:
    float length,breadth;
    rectangle(){
        cout<<"Enter the Length: ";
        cin>>length;
        cout<<"Enter the Breadth: ";
        cin>>breadth;
    }
    float calculateArea(){
        return length*breadth;
    }
    float calculatePerimeter(){
        return 2*(length+breadth);
    }
};
class triangle:public shape{
    public:
    float base,height,side1,side2,side3;
    triangle(){
        cout<<"Enter the Base: ";
        cin>>base;
        cout<<"Enter the Height: ";
        cin>>height;
        cout<<"Enter the Sides:"<<endl;
        cin>>side1>>side2>>side3;
    }
    float calculateArea(){
        return 0.5*base*height;
    }
    float calculatePerimeter(){
        return (side1+side2+side3);
    }
};
class circle:public shape{
    public:
    float radius;
    circle(){
        cout<<"Enter the Radius: ";
        cin>>radius;
    }
    float calculateArea(){
        return 3.14*(radius*radius);
    }
    float calculatePerimeter(){
        return 2*3.14*radius;
    }
};
int main(){
    shape *ptr;
    circle c1;
    rectangle r1;
    triangle t1;
    ptr=&c1;
    cout<"Area of Circle: "<<ptr->calculateArea<<endl;
    cout<<"Perimeter of Circle: "<<ptr->calculatePerimeter<<endl;
    ptr=&r1;
    cout<"Area of Rectangle: "<<ptr->calculateArea<<endl;
    cout<<"Perimeter of Rectangle: "<<ptr->calculatePerimeter<<endl;
    ptr=&t1;
    cout<"Area of Triangle: "<<ptr->calculateArea<<endl;
    cout<<"Perimeter of Triangle: "<<ptr->calculatePerimeter<<endl;
    return 0;
}