#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    public:
    friend void getData(student &s1);
    friend void display(student &s1);
};
void getData(student &s1){
    cout<<"Enter the Rollno: ";
    cin>>s1.rollno;
    cout<<"Enter the Name: ";
    cin>>s1.name;
}
void display(student &s1){
    cout<<"Rollno: "<<s1.rollno<<endl;
    cout<<"Name: "<<s1.name<<endl;
}
int main(){
    student s1;
    getData(s1);
    display(s1);
}