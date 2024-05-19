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
        cout<<"Have 2Acres Land"<<endl;
    }
};
class mother{
    public:
    void asset(){
        cout<<"Have 5Kg Gold"<<endl;
    }
};
class son:public father,public mother{
    public:
    void car(){
        cout<<"Have Yashvanth Car"<<endl;
    }
};
int main(){
    son obj;
    obj.house();
    obj.land();
    obj.asset();
    obj.car();
    return 0;
}