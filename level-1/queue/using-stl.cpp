#include<iostream>
#include<queue>
using namespace std;
void showQue(queue<int> qu){
    queue<int> q = qu;
    while(!q.empty()){
        cout << q.front()<<" ";
        q.pop();
    }
}
int main(){
    queue <int> myQue;
    myQue.push(4);
    myQue.push(8);
    for(int i= 0; i<5; i++){
        myQue.push(i*2+i-5*i);
    }
    cout << myQue.front()<<endl;
    cout << myQue.back()<<endl;
    showQue(myQue);
    return 0;
}
