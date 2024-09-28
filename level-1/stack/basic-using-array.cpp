#include<iostream>
using namespace std;
#define Maxlengh 50

class Stack{
    public:
        int data[Maxlengh];
        bool push(int x);
        int pop();
        bool isEmpty();
        int top=-1;
        int display();
        int peek();

};

bool Stack::push(int x){
    if(top>=Maxlengh-1){
        cout << "overfloaw"<<endl;
        return false;
    }
    data[++top] = x; 
    cout << x <<" pushed into Stack"<<endl;
    return true;
}

int Stack::pop(){
    if(top<0){
        cout << "Underflow"<<endl;
        return 0;
    }
    int x = data[top--];
    cout<< x << " poppted from stack"<<endl;
    return x;
}
bool Stack::isEmpty(){
        if(top<0){
            return true;
        }
        return false;
}
int Stack::peek(){
    if(top<0){
        cout << "Empty"<<endl;
        return -1;
    }
    return data[top];
}

int Stack::display(){
    if(top<0){
        cout<<"Empty";
        return -1;
    }
    int temp = top;
    cout << "Stack item are: ";
    while(temp>=0){
        cout << data[temp] <<"  ";
        temp--;
    }
    return 0;
}

string convert(bool d){
    if(d==false){
        cout <<endl<< "Got false"<<endl;
    }
    else{
        cout <<endl<< "Got True"<<endl;
    }
}


int main(){
    Stack testdata;
    testdata.push(10);
    testdata.push(20);
    testdata.pop();
    testdata.push(45);
    testdata.push(50);
    testdata.peek();
    testdata.display();
    convert(testdata.isEmpty());
    return 0;
}