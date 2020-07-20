#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node*next;
    node(int d){
        next = NULL;
        data = d;
    }
};
class Stack{
private:
    node*head;
public:
    Stack(){
        head = NULL;
    }

    void push(int data){
        if(head==NULL){
            head = new node(data);
            return;
        }
        node*n = new node(data);
        n->next = head;
        head = n;

    }

    void pop(){
        if(head==nullptr){
            return;
        }
        node*temp = head;
        head = head->next;
        delete temp;
    }

    int top(){
        return head->data;
    }
    bool isEmpty(){
        return head==NULL;
    }


};

int main(){

     ///Create an Object of the stack
    Stack s;
    ///Now we are pushin the element in the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    ///Accessing the top method from Stack class
    int x = s.top(); /// it should be 4
    cout<<x<<endl;

    ///popping the element from top
    s.pop(); /// 4 should be popped

    int x2 = s.top();
    cout<<x2<<endl;///It should be 3

    /// Now print the remaining element
    ///it should print 3 2 1
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}
