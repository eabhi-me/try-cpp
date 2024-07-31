#include<iostream>
using namespace std;
void permutate(string str, int st, int en){
    if(st==en){
        cout << str << ", ";
        return;
    }
    for(int i = st; i<=en; i++){
        swap(str[st],str[i]);
        permutate(str,st+1,en);
        swap(str[st],str[i]);
    }
}
int main(){
    string str = "ABC";
    int n = str.length()-1;
    permutate(str,0,n);
    return 0;
}