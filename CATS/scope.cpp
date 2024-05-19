#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    float m1,m2,m3;
    public:
    void getData(){
        cout<<"Enter the Name:";
        cin>>name;
        cout<<"Enter the Three Marks: ";
        cin>>m1>>m2>>m3;
    }
    float calculateAvg();
    void display(float avg);
};
float student::calculateAvg(){
    return (m1+m2+m3)/3;
}
void student::display(float avg){
    cout<<"Name: "<<name<<endl;
    cout<<"Average: "<<avg<<endl;
}
int main(){
    student s1;
    s1.getData();
    s1.display(s1.calculateAvg());
    return 0;
}