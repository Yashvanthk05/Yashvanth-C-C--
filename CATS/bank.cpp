#include<iostream>
using namespace std;
class bank{
    int accnum;
    string accname;
    double balance;
    public:
    bank(){
        cout<<"Enter the Account Number: ";
        cin>>accnum;
        cout<<"Enter the Account Name: ";
        cin>>accname;
        cout<<"Enter the Account Balance: ";
        cin>>balance;
    }
    inline void deposite(){
        double amount;
        cout<<"Enter the Amount to be Deposited: ";
        cin>>amount;
        balance+=amount;
    }
    inline void withdraw(){
        check:
        double amount;
        cout<<"Enter the Amount to be Withdrawn: ";
        cin>>amount;
        if(amount>balance){
            printf("Insufficient Funds!!");
            goto check;
        }
        else{
            balance-=amount;
        }
    }
    inline double getBalance(){
        return balance;
    }
};
int main(){
    bank acc1;
    bank acc2;
    acc1.deposite();
    acc2.withdraw();
    cout<<acc1.getBalance()<<endl;
    cout<<acc2.getBalance()<<endl;
    return 0;
}