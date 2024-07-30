#include<iostream>
using namespace std;
void HonioSolveByRecursion(int n, string from,string to, string via){
    if(n==0){
        return;
    }
    HonioSolveByRecursion(n-1, from, via, to);
    cout << "Move " << n << " from rod " << from << " to rod " << to << endl; 
    HonioSolveByRecursion(n-1, via, to, from);
}
int main(){
    HonioSolveByRecursion(5,"A","C","B");
    return 0;
}
