#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    public:
    student(){
    }
    void getdata(){
        cout<<"Enter the Rollno:";
        cin>>rollno;
        cout<<"Enter the Name: ";
        cin>>name;
    }
    void display(){
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
int main(){
    student s[3];
    for(int i=0;i<3;i++){
        s[i].getdata();
    }
    for(int i=0;i<3;i++){
        s[i].display();
    }
    return 0;
}