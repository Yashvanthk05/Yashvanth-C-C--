#include<iostream>
using namespace std;
class invent{
    int productid,price,quantity;
    string productname;
    static int totalproducts;
    static int totalvalue;
    public:
    invent(){
        productid=0;
        price=0;
        quantity=0;
        productname="Noname";
    }
    invent(int pid,string pname,int pr,int quan):productid(pid),productname(pname),price(pr),quantity(quan){
        totalproducts++;
        totalvalue+=price*quantity;
    }
    void display(){
        cout<<"Product ID: "<<productid<<endl;
        cout<<"Product Name: "<<productname<<endl;
        cout<<"Product Price: "<<price<<endl;
        cout<<"Product Quantity: "<<quantity<<endl;
    }
    inline void getTotalValue(){
        cout<<"Total Value: "<<price*quantity<<endl;
    }
    static int totalProducts(){
        return totalproducts;
    }
    static int totalinventvalue(){
        return totalvalue;
    }
};
int invent::totalproducts=0;
int invent::totalvalue=0;
int main(){
    int n;
    int productid,price,quantity;
    string productname;
    cout<<"Enter the No of Products: ";
    cin>>n;
    invent prod[n];
    for(int i=0;i<n;i++){
        cout<<"Product ID: ";
        cin>>productid;
        cout<<"Product Name: ";
        cin>>productname;
        cout<<"Product Price: ";
        cin>>price;
        cout<<"Product Quantity: ";
        cin>>quantity;
        prod[i]=invent(productid,productname,price,quantity);
    }
    for(int i=0;i<n;i++){
        prod[i].display();
        prod[i].getTotalValue();
    }
    cout<<"Total Number of Products in Inventory: "<<invent::totalProducts()<<endl;
    cout<<"Total Value of the Inventory: "<<invent::totalinventvalue()<<endl;
    return 0;
}