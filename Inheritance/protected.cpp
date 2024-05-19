 #include<iostream>
 using namespace std;
 class value{
    protected:
    int x;
 };
 class func:public value{
    public:
    void gets(){
        cout<<"Enter the Value: ";
        cin>>x;
    }
    void display(){
        cout<<"The Entered Value is "<<x;
    }
 };
 int main(){
    func obj;
    obj.gets();
    obj.display();
    return 0;
 }