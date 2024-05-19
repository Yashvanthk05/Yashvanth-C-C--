#include<iostream>
using namespace std;
class Employee{
    string name;
    float salary;
    public:
    Employee(){
        cout<<"Enter the Name: ";
        cin>>name;
        cout<<"Enter the Salary: ";
        cin>>salary;
    }
    friend void updatesalary(Employee &obj,int newsal);
    void display(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};
void updatesalary(Employee &obj,int newsal){
    obj.salary=newsal;
}
class HR_Department{
    public:
    static void changeEmployeeSal(Employee &obj,int newsal){
        updatesalary(obj,newsal);
    }
};
int main(){
    Employee emp1;
    emp1.display();
    HR_Department::changeEmployeeSal(emp1,10000);
    emp1.display();
    return 0;
}