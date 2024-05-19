#include<iostream>
using namespace std;
class student{
    int rollno;
    char name[15];
    public:
    void getdata(){
        cout<<"Enter the Student Rollno: ";cin>>rollno;
        cout<<"Enter the Student Name: ";cin>>name;
    }
    void display(){
        cout<<"Student Rollno: "<<rollno<<endl;
        cout<<"Student Name: "<<name<<endl;
    }
};
int main(){
    student s[5];
    for(int i=0;i<2;i++){
        s[i].getdata();
    }
    for(int j=0;j<2;j++){
        s[j].display();
    }
    return 0;
}