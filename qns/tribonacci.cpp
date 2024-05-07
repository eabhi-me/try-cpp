#include<iostream>
using namespace std;
int tibonacci(int n);
int main(){
    int n;
    cout << "Enter the n: ";
    cin >> n;
    cout << tibonacci(n);
    
}
int tibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 1;
    }
    else{
        // res = tibonacci(n-1)+tibonacci(n-2)+tibonacci(n-3);
        int a0=0, a1=1, a2=1, nxt;
        for(int i=3; i<=n; i++){
            nxt=a0+a1+a2;
            a0=a1;
            a1=a2;
            a2 = nxt;
            
        
        }
        return nxt;

    }
}