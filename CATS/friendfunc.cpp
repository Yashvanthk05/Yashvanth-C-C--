 #include<iostream>
 using namespace std;
 class student{
    private:
    string name;
    int rollno;
    friend void getData();
    friend void display();
 };
 void getData(){
    student s1;
    cout<<"Enter the Student Name: ";
    cin>>s1.name;
    cout<<"Enter the Student Rollno: ";0
    cin>>s1.rollno;
 }
 void display(){
    student s1;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Rollno: "<<s1.rollno<<endl;
 }
 int main(){
    getData();
    display();
    return 0;
 }