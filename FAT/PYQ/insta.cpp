#include<iostream>
using namespace std;
class user{
    protected:
    string name;
    string email;
    int no_post;
    int no_friends;
    public:
    user(){
        cout<<"Enter the Name: ";
        cin>>name;
        cout<<"Enter the Email: ";
        cin>>email;
        cout<<"Enter the No of Post: ";
        cin>>no_post;
        cout<<"Enter the No of Friends: ";
        cin>>no_friends;
    }
    
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"No of Post: "<<no_post<<endl;
        cout<<"No of Friends: "<<no_friends<<endl;
    }
    friend void calDifference(user &obj1,user &obj2);
    friend void discountVoucher(user &obj);
};
friend void calDifference(user &obj1,user &obj2){
    cout<<"Difference Between the No of Post: "<<obj1.no_post-obj2.no_post<<endl;
    cout<<"Difference Between the No of Friends: "<<obj1.no_friends-obj2.no_friends<<endl;
}
class Bonus{
    protected:
    int voucheramt;
    public:
    friend void discountVoucher(user &obj){
        if(obj.no_friends<500 && obj.no_post<5){
            voucheramt=0;
        }
        else if((obj.no_friends>=500 && obj.no_friends<=1000)&&(obj.no_post>=5 && obj.no_post<=10)){
            voucheramt=500;
        }
        else if((obj.no_friends>=1001 && obj.no_friends<=5000) && (obj.no_post>=11 && obj.no_post<=20)){
            voucheramt=2000;
        }
        else if((obj.no_friends>=5001) && (obj.no_post>=20)){
            voucheramt=2000;
        }
    }
}
int main(){

    return 0;

}