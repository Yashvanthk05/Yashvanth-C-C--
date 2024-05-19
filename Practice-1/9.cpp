#include<iostream>
using namespace std;
/*Consider the below UML defini%on:
DATE
-day: int
-month : int
-year: int
DATE()
DATE(int, int, int)
readDATE()
printDATE()
DATE addDATE(DATE, int)
int differenceInDATEs(DATE, DATE)
Write a C++ program to define the above class and include a main func%on to test harness 
the class. The addDATE() should the specified number of days to the DATE object and return 
the new DATE object, differenceInDATEs() should return the number of days between the 
two DATE objects*/
class date{
    private:
    int date,month,year;
    public:
    date(){
        date=1;
        month=1;
        year=2024;
    }
    date(int a,int b, int c){
        date=a;
        month=b;
        year=c;
    }
    void readDate(){
        cout<<"Enter the Date: ";
        cin>>date;
        cout<<"Enter the Month: ";
        cin>>month;
        cout<<"Enter the Year: ";
        cin>>year;
    }
    void printDate(){
        cout<<"DATE: "<<date<<"/"<<month<<"/"<<year<<endl;
    }
    date addDate(date d,int a){
        date result=d;
        result.date+=a;
        return result;
    }
    int differenceInDate(date d1,date d2){
        date result;
        result.date=d1.date-d2.date;
        result.month=d1.month-d2.month;
        result.year=d1.year-d2.year;
        cout<<"The Difference in Date is: "<<result.date<<" days "<<result.month<<" months "<<result.year<<endl;
    }
};
int main(){
    date d1(18,12,2024);
    date d2(11,5,2018);
    date d3;
    d3.readDate();
    d1.printDate();
    d2.printDate();
    d3.printDate();
}