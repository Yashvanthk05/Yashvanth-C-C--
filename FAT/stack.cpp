#include<iostream>
#include<stack>
using namespace std;
template<typename T>
void push(stack<T>& stk){
    int n;
    cout<<"Enter the Number of Elements to be Pushed into the Stack: ";
    cin>>n;
    T x;
    for(int i=0;i<n;i++){
        cout<<"Enter the Element to be Pushed: ";
        cin>>x;
        stk.push(x);
    }
}
template<typename T>
void pop(stack<T>& stk){
    while(!stk.empty()){
        cout<<"The Topmost Element is: "<<stk.top()<<endl;
        stk.pop();
    }
}
int main(){
    stack<int> stk;
    push(stk);
    pop(stk);
    return 0;
}