#include<iostream>
using namespace std;
class A{
    private:
    int a;
    static int count;
    public:
    A(){
        count++;
    }
    static int getCount(){
        return count;
    }
};
int A::count=0;
int main(){
    A obj1;
    A obj2;
    cout<<"Number of Objects Created: "<<A::getCount();
    return 0;
}