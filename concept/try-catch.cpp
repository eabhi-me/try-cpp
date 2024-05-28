#include<iostream>
using namespace std;
int main(){
    float a = 10;
    try{
        for(int b=5; b>=-5; b--){
        if(b!=0){
            cout << a/b << endl;
        }
        else{
            throw 505;
        }
        }
    }catch(int c){
        cout << c << " Error: " << "Zero Devision error" << endl;
    }
    return 0;
}