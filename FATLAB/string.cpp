 #include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:";
    cin>>str;
    int count=0;
    while(str[count]!='\0'){
        count++;
    }
    for(int i=(count-1);i>=0;i--){
        cout<<str[i];
    }
    
    cout<<"\n"<<count<<endl;
    for(int i=0;i<count;i++){
        if(str[i]>=65 & str[i]<=90){
            str[i]+=32;//97 122
        }
        else if(str[i]>=97 &str[i]<=122){
            str[i]-=32;// 65 90
        }
    }
    cout<<str<<endl;
    return 0;
}