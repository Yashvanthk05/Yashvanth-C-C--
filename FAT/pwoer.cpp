#include<iostream>
#include<math.h>
template<class T>
void power(T base,int exp){
    if(exp<0){
        exp=abs(exp);
    }
    printf("Value %.2f\n",pow(base,exp));
}
int main(){
    power(2,3);
    power(2.23,-3);
    return 0;
}