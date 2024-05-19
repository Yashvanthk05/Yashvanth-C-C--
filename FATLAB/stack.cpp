#include<iostream>
#include<stack>
using namespace std;
template<typename T>
void push(stack<T>& stk){
    int n;
    cout<<"Enter the Number of Elements to be Pushed: ";
    cin>>n;
    T x;
    for(int i=0;i<n;i++){
        cout<<"Enter the Element to be Pushed: ";
        cin>>x;
        stk.push(x);
    }
    cout<<"Successfully Pushed the Elements into the Stack!!"<<endl;
}
template<typename T>
void pop(stack<T>& stk){
    while(!stk.empty()){
        cout<<"The Topmost Element of the Stack: "<<stk.top()<<endl;
        stk.pop();
    }
}
int main(){
    stack<int> stk1;
    push(stk1);
    pop(stk1);
    return 0;
}