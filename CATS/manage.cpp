#include<iostream>
using namespace std;
class employee{
    protected:
    string name;
    int empid;
    double salary;
    public:
    employee(){
        cout<<"Enter the Employee Name: ";
        cin>>name;
        cout<<"Enter the Employee ID: ";
        cin>>empid;
        cout<<"Enter the Employee Salary: ";
        cin>>salary;
    }
    void displayDetails(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee ID: "<<empid<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};
class manager:public employee{
    protected:
    string department;
    public:
    manager(){
        cout<<"Enter the Employee Department: ";
        cin>>department;
    }
    void displayDetails(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee ID: "<<empid<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
        cout<<"Employee Department: "<<department<<endl;
    }
};
class developer:public employee{
    protected:
    string programminglang;
    public:
    developer(){
        cout<<"Enter the Employee Programming Language: ";
        cin>>programminglang;
    }
    void displayDetails(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee ID: "<<empid<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
        cout<<"Employee Programming Language: "<<programminglang<<endl;
    }
};
int main(){
    manager m1;
    developer d1;
    m1.displayDetails();
    d1.displayDetails();
    return 0;
}