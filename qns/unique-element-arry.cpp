#include<iostream>
using namespace std;
int main(){

    int array_S_1[]={4,4,4,4,4,4};
    int i = 0, n =  sizeof(array_S_1)/sizeof(array_S_1[i]);
    int ans=0;
    while(i<n){
        ans =  ans^array_S_1[i];
        i++;
    }
    cout << ans;

    return 0;
}


