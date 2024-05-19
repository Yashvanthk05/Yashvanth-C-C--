#include<iostream>
using namespace std;
class Employee{
    protected:
    string name;
    int salary,basic,HRA,DA,TA;
    public:
    Employee(){
        name="noname";
        salary=0;
        HRA=0;DA=0;TA=0;
    }
    Employee(string name,int basic):name(name),salary(basic){
    }
    virtual int calculateSalary(){
        salary=basic+HRA+DA+TA;
        return salary;
    }
};
class Manager:public Employee{
    public:
    Manager(string name,int basic){
        Employee(name,basic);
        HRA=0.18*basic;
        DA=0.12*basic;
        TA=0.15*basic;
    }
    int calculateSalary(){
        salary=basic + HRA + DA + TA;
        return salary;
    }
};
class Developer:public Employee{
    public:
    Developer(string name,int basic){
        Employee(name,basic);
        HRA=0.14*basic;
        DA=0.1*basic;
        TA=0;
    }
    int calculateSalary(){
        salary=basic+HRA+DA+TA;
        return salary;
    }
};
int main(){
    Employee *p;
    Manager m1("Yashvanth",2000);
    Developer d1("Abinav",1000);
    p=&m1;
    cout<<"Salary of Manager: "<<p->calculateSalary()<<endl;
    p=&d1;
    cout<<"Salary of Developer: "<<p->calculateSalary()<<endl;
    return 0;
}