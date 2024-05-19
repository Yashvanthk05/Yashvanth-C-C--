#include<iostream>
using namespace std;
//One base Class Only
class father{
    public:
    void house(){
        cout<<"Have 3BHK House"<<endl;
    }
};
class son:public father
{
    public:
    void car(){
        cout<<"Have Yashvanth Car"<<endl;
    }
};
int main(){
    son obj;
    obj.house();
    obj.car();
    return 0;
}