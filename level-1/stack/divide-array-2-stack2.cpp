#include<iostream>
using namespace std;
class twoStack{
    int *arr;
    int size;
    int top1, top2;
    public:
        twoStack(int n){
            size = n;
            arr = new int[size];
            top1 = -1;
            top2 = size;
        }
        void push1(int x){
            if(top1<top2-1){
                top1++;
                arr[top1]=x;
                cout << "Pushed in s1c" << x  << endl;
            }
            else
                cout << "Overflow, cannot be inserted " << x <<endl;
        }
        void push2(int x){
            if(top1<top2-1){
                top2--;
                arr[top2] = x;
                cout << "Pushed in s2 " << x << endl;
            }
            else
                cout << "Overflow, cannot be inserted " << x <<endl;
        }

        void pop1(){
            if(top1>-1){
                cout << "Popped from s1 "<< arr[top1];
                top1--;
            }
            else
                cout << "Underflow, cannot be delete"<<endl;
        }
        void pop2(){
            if(top2<size){
                cout << "Popped from s2" << arr[top2];
                top2--;
            }
            else
                cout << "Underflow, cannot be delete"<<endl;
        }

        void showtop1(){
            if(top1<=-1){cout << "Empty"<<endl;}
            else{cout<<"top of s1 "<<arr[top1]<<endl;}
        }
        void showtop2(){
            if(top2>=size){cout << "Empty"<<endl;}
            else{cout << "Top of s2 "<<arr[top2]<<endl;}
        }
        void show1(){
            int temp = top1;
            while(temp>-1){cout<<"Ele of s1 "<<arr[temp] <<"   ";temp--;}
            cout << "Empty" << endl;
        }
        void show2(){
            int temp = top2;
            while(temp<size){cout << "Ele of s2 "<<arr[temp]<<"     ";temp++;}
            cout << "Empty" << endl;
        }
};
int main(){
    twoStack s(10);
    s.push1(5); s.push1(8); s.push1(9);
    s.push2(10); s.push2(45); s.push2(20);
    s.showtop1(); s.showtop2();
    return 0;
}