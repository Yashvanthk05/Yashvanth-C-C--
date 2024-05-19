#include<iostream>
using namespace std;
class cal{
    int a;
    public:
    cal(){
        cout<<"Enter the Number: ";
        cin>>a;
    }
    void operator +(){
        a+=2;
        cout<<a<<endl;
    }
};
int main(){
    cal c1;
    +c1;
    return 0;
}