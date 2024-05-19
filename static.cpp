#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    static int count;
    public:
    void getdata(){
        cout<<"Enter the Name:";
        cin>>name;
        cout<<"Enter the Age:";
        cin>>age;
        count++;
    }
    void display(){
        cout<<"Name of the Student: "<<name<<endl;
        cout<<"Age of the Student: "<<age<<endl;
    }
    static int getcount(){
        return count;

    }
};
int student::count=0;
int main(){
    student s1;
    s1.getdata();
    s1.display();
    student s2;
    s2.getdata();
    s2.display();
    cout<<"Total Number of Students: "<<student::getcount();

}