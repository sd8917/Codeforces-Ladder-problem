///queue implementation using linked list

#include <iostream>
using namespace std;
class Queue{
public:
    int *arr;
    int cs;
    int ms;
    int front;
    int rear;

    Queue(int default_size=7){
        this->front = 0;
        this->rear = default_size  -1;
        this->cs = 0;
        this->ms = default_size;
        this->arr = new int[this->ms];
    }
    bool isFull(){
        return this->cs == this->ms;
    }
    bool isempty(){
        return this->cs ==0;
    }
    void enqueue(int data){
        if(!isFull()){
            this->rear = (this->rear+1)%this->ms;
            this->arr[rear] = data;
            this->cs += 1;
        }

    }
    void dequeue(){
        if(!isempty()){
            //pop from front
            this->front = (this->front+1)%this->ms;
            this->cs -= 1;
        }

    }
    int getfront(){
        return this->arr[this->front];
    }
};
int main() {
    Queue q(7);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(8);

    cout<<q.getfront()<<endl;
    q.dequeue();
    cout<<q.getfront()<<endl;


    return 0;
}
