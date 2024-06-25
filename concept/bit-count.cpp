#include<iostream>
using namespace std;
// count set bits using multiple division
int setBitCount(int n){
    int res = 0;
    while( n>0 ){
        if(n%2==1){
            res++;
        }
        n/=2;
    }
    return res;
}

// By using and operator
int setBitCountUsingAnd(int n){
    int res = 0;
    while(n>0){
        res = res+(n&1);
        n = n/2;
    }
    return res;
}

// By using Brain Kerningam's Algorithm
// Tranverse through only the set bit
int setBitCountUsingBKA(int n){
    int res = 0;
    while(n>0){
        n = n&(n-1);
        res= res+1;
    }
    return res;
} 

// driver code
int main(){
    int setRes = setBitCountUsingBKA(5);
    cout << setRes;
    return 0;
}