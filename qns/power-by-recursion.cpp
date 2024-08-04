#include<iostream>
using namespace std;
long long power(int N, int R){
    const int MOD = 1000000007;
    if(R==0){
        return 1;
    }
    long long half = power(N, R/2);
    long long halfSquare = (half*half) % MOD;
    if(R%2==0){
        return halfSquare;
    } else{
        return (N*halfSquare)% MOD;
    }
}
int main(){
    cout << power(12,21);
    return 0;
}