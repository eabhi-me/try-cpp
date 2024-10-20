#include<iostream>
using namespace std;

class twoStack{
    int *arr;
    int size;
    int top1, top2;
    public:
        twoStack(int n){
            size = n;
            arr = new int[n];
            top1 = n/2+1;
            top2 = n/2;
        }
        void push1(int x){
            if(top1>=0){
                top1--;
                arr[top1]=x;
                cout << "Pushed in s1 " << arr[top1] <<endl;
                
            }
            else{
                cout << "overflow: cannot insert into stack by "<< x <<endl;
                return;
            }
        }
        int Showtop1(){
            if(top1>size/2){cout << "empty";return -1;} 
            else{cout << "top elememt in s1 is: " << arr[top1] << endl;}
        }
        void push2(int x){
            if(top2<=size-1){
                top2++;  // there may at least one space for insert
                arr[top2] = x;
                cout << "Pushed in s2 " << arr[top2] <<endl;
                 
            }
            else{
                cout << "overflow: cannot insert into stack by " << x <<endl;
                return;
            }
        }
        int Showtop2(){
            if(top2<size/2+1){cout << "empty";return -1;}
            else{cout<<"top elememt in s2 is: "  << arr[top2] << endl;}
        }
        int pop1(){
            if(top1<=size/2){
                int x = arr[top1];
                cout << "Pop from s1 " << arr[top1]<<endl;
                top1++;
                return x;

            }
            else{
                cout << "Stack underflow" <<endl;
                return -1;
            }
        }
        int pop2(){
            if(top2>=size/2+1){
                int x = arr[top2];
                cout << "Pop from s1 " << arr[top2]<<endl;
                top2--;
                return x;
            }
            else{
                cout << "Stack Underflow"<<endl;
                return -1;
            }
        }
        void show1(){
            int temp = top1;
            cout << "Element in stack1 is ";
            while(temp<size/2+1){
                cout << arr[temp] << "  ";
                temp++;

            }
            cout << endl;
        }

        void show2(){
            int temp = top2;
            cout << "Element in stack2 is ";
            while(temp>=size/2+1){
                cout << arr[temp] << "  ";
                temp--;
            }
            cout << endl;
        }
        
    
};
int main(){
    twoStack s(5);
    cout<<"pushing----" << endl;
    s.push1(5);
    s.push1(8);
    s.push1(9);
    s.push1(3);
    s.Showtop1();
    cout<<"pushing-----" <<endl;
    s.push2(20);
    s.push2(45);
    s.push2(8);
    s.push2(9);
    s.Showtop2();
    cout<<"poping-----" <<endl;
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop1();
    s.push1(1);
    s.push1(2);
    s.push2(100);
    // cout<<"pop"<<endl;
    // cout << s.pop2();
    // cout<<"push"<<endl;
    // s.push1(10);
    cout<<"Show1-----"<<endl;
    s.show1();
    cout<<"show2-----"<<endl;
    s.show2();

    return 0;
}