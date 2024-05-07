#include<iostream>
using namespace std;
bool isPalindrome(int x){
        int count=0, digit, tempNum; 
        double res=0;
        if(x<0){
            return false;
        }
        else{
           for(tempNum=x; tempNum!=0; tempNum/=10){
                int digit = tempNum%10;
                res = (res * 10) + digit;
                
            }
            if(res==x){
                return true;
            }
            else{
                return false;
            }
        }
    }
int main(){
   cout << isPalindrome(121);
   return 0;
}
