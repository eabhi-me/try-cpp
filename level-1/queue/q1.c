
#include<stdio.h>
int queue[10];
int front = 0;
int  rear = -1;
int count = 0;
void enqueue(int value) {
    if (count == 10) {
        printf("Queue is full\n");
        return;
    }
    
    rear = (rear + 1) % 10;
    queue[rear] = value;
    count++;
}

int dequeue() {
    if (count == 0) {
        printf("Queue is empty\n");
        return -1;
    }
    
    int value = queue[front];
    front = (front + 1) % 10;
    count--;
    
    return value;
}
void displayQueue() {
    if (count == 0) {
        printf("Queue is empty\n");
        return;
    }
    
    printf("Queue elements: ");
    int i;
    for (i = 0; i < count; i++) {
        int index = (front + i) % 10;
        printf("%d ", queue[index]);
    }
    printf("\n");
}
int main(){
    enqueue(10);
    enqueue(20);
    displayQueue();
}