#include<iostream>
using namespace std;
class student{
    int rollno;
    char name[20];
    static int count;
    public:
    void getdata();
    void display();
    static int getCount();
};
void student::getdata(){
    count++;
    cout<<"Enter the Student Rollno: ";cin>>rollno;
    cout<<"Enter the Student Name: ";cin>>name;
}
void student::display(){
    cout<<"Student Rollno: "<<rollno<<endl;
    cout<<"Student Name: "<<name<<endl;
}
int student::getCount(){
    return count;
}
int student::count=0;
int main(){
    student s[5];
    for(int i=0;i<2;i++){
        s[i].getdata();
    }
    for(int j=0;j<2;j++){
        s[j].display();
    }
    cout<<"Total Number of Students: "<<student::getCount();
}