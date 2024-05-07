#include<iostream>
using namespace std;
int revereNum(int x){
    int tempNum; 
    double res=0;
   
       for(tempNum=x; tempNum!=0; tempNum/=10){
            int digit = tempNum%10;
            res = (res * 10) + digit;
            
        }
        return res;
}
int main(){
    cout << revereNum(120);
}