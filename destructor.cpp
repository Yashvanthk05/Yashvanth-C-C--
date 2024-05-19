#include<iostream>
using namespace std;
class sum{
    private:
    int a,b;
    public:
    sum(int a,int b){
        cout<<a+b<<endl;
    }
    ~sum(){
        cout<<"Memory Cleared";
    }
};
int main(){
    int a,b;
    cout<<"Enter the Two Numbers: ";
    cin>>a>>b;
    sum obj1(a,b);
    return 0;
}
