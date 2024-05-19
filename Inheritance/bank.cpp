 #include<iostream>
 using namespace std;
 class account{
    public:
    string accname;
    int accno;
    string acctype;
    void getdetails(){
        cout<<"Enter the Account Name: ";
        cin>>accname;
        cout<<"Enter the Account Number: ";
        cin>>accno;
        cout<<"Enter the Account Type: ";
        cin>>acctype;
    }
    void displaydetails(){
        cout<<"Account Name: "<<accname<<endl;
        cout<<"Account Number: "<<accno<<endl;
        cout<<"Account Type: "<<acctype<<endl;
    }
 };
class savingsacc:public account{
    private:
    float s_balance=0;
    public:
    void s_withdraw(){
        float withdraw;
        cout<<"Balance: "<<s_balance<<endl;
        cout<<"Enter Amount to be Withdrawed: ";
        cin>>withdraw;
        if (withdraw<s_balance && s_balance>500){
            s_balance-=withdraw;
            cout<<"Balance After Withdrawing: "<<s_balance<<endl;
        }
        else{
            cout<<"Insufficient Balance"<<endl;
        }
    }
    void s_deposit(){
        float deposit,interest;
        cout<<"Balance: "<<s_balance<<endl;
        cout<<"Enter the Amount to Deposited: ";
        cin>>deposit;
        interest=deposit+deposit*0.02;
        s_balance+=interest;
        cout<<"Balance After Depositing:"<<s_balance<<endl;
    }
 };
 class currentacc:public account{
    private:
    float c_balance=0;
    public:
    void c_withdraw(){
        float withdraw;
        cout<<"Balance: "<<c_balance<<endl;
        cout<<"Enter Amount to be Withdrawed: ";
        cin>>withdraw;
        if (withdraw<c_balance && c_balance>1000){
            c_balance-=withdraw;
            cout<<"Balance After Withdrawing: "<<c_balance<<endl;
        }
        else{
            cout<<"Insufficient Balance"<<endl;
        }
    }
    void c_deposit(){
        float deposit;
        cout<<"Balance: "<<c_balance<<endl;
        cout<<"Enter the Amount to Deposited: ";
        cin>>deposit;
        c_balance+=deposit;
        cout<<"Balance After Depositing: "<<c_balance<<endl;
    }
 };
int main(){
    savingsacc acc1;
    currentacc acc2;
    char type;
    int choice;
    cout<<"Enter the Account Type"<<endl;
    cout<<"1.Savings Account (Type s)"<<endl;
    cout<<"2.Current Account (Type c)"<<endl;
    cin>>type;
    if(type=='s' || type=='S'){
        while(1){
            cout<<"Menu\n1.Enter Account Details\n2.Display Account Details\n3.Deposit\n4.Withdraw\n5.Exit"<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                acc1.getdetails();
                break;
                case 2:
                acc1.displaydetails();
                break;
                case 3:
                acc1.s_deposit();
                break;
                case 4:
                acc1.s_withdraw();
                break;
                case 5:
                goto end;
                default:
                cout<<"Invalid Input"<<endl;
            }
        }
    }
    else if(type=='c' || type=='C'){
        while(1){
            cout<<"Menu\n1.Enter Account Details\n2.Display Account Details\n3.Deposite\n4.Withdraw\n.5Exit"<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                acc2.getdetails();
                break;
                case 2:
                acc2.displaydetails();
                break;
                case 3:
                acc2.c_deposit();
                break;
                case 4:
                acc2.c_withdraw();
                break;
                case 5:
                goto end;
                default:
                cout<<"Invalid Input"<<endl;
            }
        }
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
    end:
    cout<<"Thank You For Banking with us!!"<<endl;
}