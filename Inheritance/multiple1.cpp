#include<iostream>
using namespace std;
class grandfather{
    public:
    void house(){
        cout<<"Have 3BHK House"<<endl;
    }
};
class father:public grandfather{
    public:
    void land(){
        cout<<"Have 2 acres Land"<<endl;
    }
};
class son:public father{
    public:
    void car(){
        cout<<"Have Yashvanth Car"<<endl;
    }
};
int main(){
    son obj;
    obj.house();
    obj.land();
    obj.car();
}