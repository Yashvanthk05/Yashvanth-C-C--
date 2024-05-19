#include<iostream>
using namespace std;
class Class{
    int noofboys,noofgirls;
    public:
    Class(){
        noofboys=0;
        noofgirls=0;
    }
    Class(int X,int Y){
        noofboys=X;
        noofgirls=Y;
    }
    friend Class add(Class &obj1,Class &obj2){
        Class obj3;
        obj3.noofboys=obj1.noofboys + obj2.noofboys;
        obj3.noofgirls=obj1.noofgirls + obj2.noofgirls;
        return obj3;
    }
    void display(){
        cout<<"No of Boys: "<<noofboys<<endl;
        cout<<"No of Girls: "<<noofgirls<<endl;
    }
};
int main(){
    Class obj1(30,22);
    Class obj2(24,36);
    Class obj3;
    obj3=add(obj1,obj2);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}