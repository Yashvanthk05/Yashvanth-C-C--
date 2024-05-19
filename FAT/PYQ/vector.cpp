#include<iostream>
using namespace std;
class vector{
    int x,y,z;
    public:
    vector(){
        x=0;y=0;z=0;
    }
    vector(int x,int y,int z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
    vector multiply(vector obj2){
        vector obj3;
        obj3.x=this->x*obj2.x;
        obj3.y=this->y*obj2.y;
        obj3.z=this->z*obj2.z;
        return obj3;
    }
    int dotproduct(vector obj2){
        int sum=0;
        sum=(x*obj2.x+y*obj2.y+z*obj2.z);
        return sum;
    }
    void display(){
        cout<<"X Coordinate: "<<x<<endl;
        cout<<"Y Coordinate: "<<y<<endl;
        cout<<"Z Coordinate: "<<z<<endl;
    }
};
int main(){
    vector v1(1,2,3);
    vector v2(4,5,6);
    vector v3;
    v3=v1.multiply(v2);
    int dotproduct;
    dotproduct=v1.dotproduct(v2);
    v1.display();
    v2.display();
    v3.display();
    cout<<"Dot Product: "<<dotproduct<<endl;
    return 0;
}