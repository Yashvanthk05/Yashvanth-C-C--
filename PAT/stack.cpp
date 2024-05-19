#include<iostream>
#include<stack>
using namespace std;
template<typename T>
void push(stack<T>& stk){
    int n;
    cout<<"Enter the Number of Elements to be pushed into the stack:";
    cin>>n;
    T x;
    for(int i=0;i<n;i++){
        cout<<"Enter the Element to be pushed into the stack: ";
        cin>>x;
        stk.push(x);
    }
}
template<typename T>
void pop(stack<T>& stk){
    while(!stk.empty()){
        cout<<"Top Element: "<<stk.top()<<endl;
        stk.pop();
    }
}
int main(){
    stack<int> stk;
    push(stk);
    stack<char> stk2;
    push(stk2);
    pop(stk);
    pop(stk2);
}