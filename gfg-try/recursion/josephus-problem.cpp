#include<iostream>
#include<vector>
using namespace std;
int survivalPerson(int n, int k){
    // int position = 0;
    // if(n==1){
    //     return;
    // }
    // survivalPerson(n-1,k);
    // position = 



    // vector method
    vector<int> person;
    for(int i = 0; i<n; i++){
        person.push_back(i);
    }
    int position = 0;
    while(person.size()>1){
        position = (position + k-1) % person.size();
        person.erase((person.begin()+position));

    }
    return person[0];
}

int JoshephProb(int n,int k){
    if(n==1){
        return 0;
    }
    return (JoshephProb(n-1, k) + k-1) % n + 1;
}

int main(){
    int res = survivalPerson(2,3);
    int res1 = JoshephProb(2,3);
    cout << res<<endl<<res1;
}