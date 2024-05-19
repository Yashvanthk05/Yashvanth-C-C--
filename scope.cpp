#include<iostream>
using namespace std;
class marks{
    private:
    int m1,m2,m3,total;
    float avg;
    public:
    void getdata();
    void display();
};
void marks::getdata(){
    cout<<"Enter the Three Marks m1,m2,m3: ";
    cin>>m1>>m2>>m3;
}
void marks::display(){
    total=m1+m2+m3;
    avg=total/3;
    cout<<"Total: "<<total<<"\nAverage :"<<avg;
}
int main(){
    marks s1;
    s1.getdata();
    s1.display();
    return 0;
}