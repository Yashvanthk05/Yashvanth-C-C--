#include<iostream>
using namespace std;
template <class T>
void swap(T &a,T &b)
{
    T t=a;
    a=b;
    b=t;
}
int main()
{
    int a=10,b=5;
    char x='A',y='B';
    cout<<"Before Swapping: a="<<a<<" & b="<<b<<endl;
    swap(a,b);
    cout<<"After Swapping: a="<<a<<" & b="<<b<<endl;
    cout<<"Before Swapping: x="<<x<<" & y="<<y<<endl;
    swap(x,y);
    cout<<"After Swapping: x="<<x<<" & y="<<y<<endl;
    return 0;
}
