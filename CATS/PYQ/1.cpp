#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int id;
    float m1,m2,m3;
    public:
    student(string na,int ID,float mark1,float mark2,float mark3){
        name=na;
        id=ID;
        m1=mark1;
        m2=mark2;
        m3=mark3;
    }
    friend void calTotalAvg(student obj);
};
void calTotalAvg(student obj){
    cout<<"Total: "<<(obj.m1+obj.m2+obj.m3)<<endl;
    cout<<"Average: "<<((obj.m1+obj.m2+obj.m3)/3)<<endl;
}
int main(){
    int n;
    cout<<"Enter the Number of Students: ";
    cin>>n;
    string name;
    int id;
    float m1,m2,m3;
    student* stud=(student *)calloc(n,sizeof(student));
    for(int i=0;i<n;i++){
        cout<<"Enter the Name: ";
        cin>>name;
        cout<<"Enter the ID: ";
        cin>>id;
        cout<<"Enter the 3 Marks: ";
        cin>>m1>>m2>>m3;
        stud[i]=student(name,id,m1,m2,m3);
    }
    for(int i=0;i<n;i++){
        calTotalAvg(stud[i]);
    }
    return 0;
}