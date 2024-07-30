#include<iostream>
using namespace std; 
int ropeValid(int n , int a, int b, int c){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int res = max(ropeValid(n-a,a,b,c), max(ropeValid(n-b,a,b,c),ropeValid(n-c,a,b,c)));
    if(res==-1){
        return -1;
    }
    else{
        return res+1;
    }
}

int main(){
    cout << ropeValid(15,1,5,4);
    return 0;

}