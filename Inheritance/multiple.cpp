#include<iostream>
using namespace std;
class father{
    public:
    void house(){
        cout<<"Have 3BHK House"<<endl;
    }
};
class mother{
    public:
    void property(){
        cout<<"Have 5kg Gold"<<endl;
    }
};
class son:public father,public mother
{
    public:
    void car(){
        cout<<"Have Yashvanth Car"<<endl;
    }
};
int main(){
    son obj;
    obj.house();
    obj.property();
    obj.car();
    return 0;
}