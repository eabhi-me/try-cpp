/*
    This is simple way of queue data structure using araay
    It take O(1) for enque but deeque take O(n) complexity as involve switching element
    Other take O(1) complexity as no switching

*/
#include<iostream>
using namespace std;
class queue{
    private:
        int size, capacity;
        int front, rear;
        int *arr;
    public:
        queue(int n){
            size = 0;
            capacity = n;
            front = -1, rear = -1;
            arr = new int[capacity];
        } 
        bool isfull(){
            if(size==capacity){
                return true;
            }
            return false;
        }
        // to add from rear
        void enque(int x){
            if(isfull()==true){
                cout << "Overflow" <<endl;
                return;
            }
            else if(front==-1 && rear == -1){
                front = 0;
                rear = 0;
                size = 1;
                arr[rear]=x;
                cout << "Enque " << arr[rear]<<endl;
            }
            else{
                size++;
                rear = (rear+1)%capacity;
                arr[rear]=x;
                cout << "Enque " << arr[rear]<<endl;
            }
            
        }
        // to remomve from front take O(N)
        void dequeueN(){
            if(size<=0){
                cout << "Underflow"<<endl;
                return;
            }
            else if(size==1){
                cout << "Deque " << arr[front]<<endl;
                front=-1;
                rear=-1;
            }
            int temp = front;
            while(temp<rear){
                cout << "Deque " << arr[front]<<endl;
                arr[temp]=arr[temp+1];
                temp++;
            }
            size--;
            rear--;
        }

        // take O(1) take delete
        void dequeue1(){
            if(size<=0){
                cout << "Underflow"<<endl;
                return;
            }
            else if(size==1){
                cout << "Deque " << arr[front]<<endl;
                front=-1;
                rear=-1;
                size=0;
            }
            cout << "Deque " << arr[front]<<endl;
            front = (front+1)%capacity;
            size--;
        }
        // to show entire queue
        void showqueue(){
            if(front==-1){
                cout << "Empty" <<endl;
                return;
            }
            int temp = front;
            cout << "Queue is: ";
            while(temp!=rear){
                cout<< arr[temp] << " ";
                temp = (temp+1)%capacity;
            }
            // as loop end when front = rear so conrner case error
            cout << arr[rear] << " ";
            cout <<  endl;
        }

        void showfront(){
            if(size<0){
                cout << "empty" <<endl;
                return;
            }
            cout << "Front Elemetn is : " <<  arr[front] << endl;
        }

        void showrear(){
            if(size<0){
                cout << "empty" <<endl;
                return;
            }
            cout << "Rear Elemetn is : " <<  arr[rear] << endl;
        }
    
};

int main(){
    queue q(4);
    q.showqueue();
    q.enque(5);
    q.enque(10);
    q.enque(89);
    q.showqueue();
    q.dequeue1();
    q.showqueue();
    q.enque(25);
    q.enque(50);
    q.enque(40);
    q.dequeue1();
    q.showqueue();
    q.showfront();
    q.showrear();
    q.dequeue1();
    q.showqueue();
    return 0;
}