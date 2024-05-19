#include<iostream>
using namespace std;
class height{
    private:
    int fleet,inches;
    public:
    height(int f=0,int i=0){
        fleet=f;
        inches=i;
    }
    void sum(height obj1,height obj2){
        fleet=obj1.fleet+obj2.fleet;
        inches=obj1.inches+obj2.inches;
        if(inches>=12){
            fleet+=inches/12;
            inches=inches%12;
        }
    }
    void display(){
        cout<<"FEET: "<<fleet<<endl;
        cout<<"INCHES: "<<inches<<endl;
    }
};
int main(){
    height obj1(6,9);
    height obj2(3,4);
    height obj3;
    obj3.sum(obj1,obj2);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}