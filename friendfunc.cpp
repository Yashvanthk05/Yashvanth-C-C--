#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    friend void Data();
};
void Data()
{
    student obj;
    cout<<"Enter the Name: ";
    cin>>obj.name;
    cout<<"Enter the Age: ";
    cin>>obj.age;
    cout<<"Name: "<<obj.name<<endl;
    cout<<"Age: "<<obj.age<<endl;
}
int main(){
    Data();
    return 0;
}
