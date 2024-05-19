#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int phno;
    Person(){
        cout<<"Enter the Person Name: ";
        cin>>name;getchar();
        cout<<"Enter the Person Phone Number: ";
        cin>>phno;
        getchar();
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Phone Number: "<<phno<<endl;
    }
};
class Student:public Person{
    int rollno;
    string course;
    public:
    Student(){
        cout<<"Enter the Student Roll NO: ";
        cin>>rollno;getchar();
        cout<<"Enter the Student Course: ";
        cin>>course;getchar();
    }
    void display(){
        Person::display();
        cout<<"RollNO: "<<rollno<<endl;
        cout<<"Course: "<<course<<endl;
    }
};
class Exam:public Person{
    int marks[5];
    int total=0,avg=0;
    public:
    Exam(){
        for(int i=0;i<5;i++){
            cout<<"Enter the Subject "<<i+1<<" Marks: ";
            cin>>marks[i];getchar();
        }
    }
    void cal(){
        for(int i=0;i<5;i++){
            total+=marks[i];
        }
        avg=total/5;
    }
    void display(){
        Person::display();
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Average Marks: "<<avg<<endl;
    }
};
int main(){
    Person p1;
    Student s1;
    Exam e1;
    p1.display();
    s1.display();
    e1.cal();
    e1.display();
    return 0;
}