#include<iostream>
using namespace std;
class area{
    protected:
    float length,breadth;
    public:
    area(){
        cout<<"Enter the Length: ";
        cin>>length;
        cout<<"Enter the Breadth: ";
        cin>>breadth;
        cout<<"Area: "<<length*breadth<<endl;
    }
    area(int len,int b)
    {
        length = len;
        breadth = b;
    }
};
class volume:public area{
    protected:
    float height;
    public:
    volume():area(32,45){
        cout<<"Enter the Height: ";
        cin>>height;
        cout<<"Volume: "<<length*breadth*height<<endl;
    }
};
int main(){
    volume v1;
    return 0;
}