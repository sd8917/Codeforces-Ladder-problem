
/*
    LINKEDLIST

*/

#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node*next;
    node(int d){
        data =d;
        next = NULL;
    }
};

void* insertAtFront(node*&head,node*&tail,int data){
    if(head==NULL){
        head = tail = new node(data);
    }else{
        node* n = new node(data); //creates a nodes
        n->next = head; //create the link between the n and the present element.
        head = n; //make n as head
    }
}

int length(node*head){
    int len =0;
    while(head!=NULL){
        len++;
        head= head->next;
    }
    return len;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
void InsertAtEnd(node* &head,node* &tail,int data){
	if(head == NULL){
		head = tail = new node(data);
	}
	else{
		node*n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void insertAtMiddle(node*&head,node*&tail,int pos,int data){
    if(pos==0){
        insertAtFront(head,tail,data);
    }else if(pos>=length(head)-1){
        InsertAtEnd(head,tail,data);
    }else {
        node*temp = head;
        int cnt =1;
        while(cnt<=pos-1){
            temp = temp->next;
            cnt++;
        }
        //now we reached prev to the node where insert a new element.
        node* n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }

}

void setMiddleHead(node*&head){
    if(head==NULL){
        return;
    }
    ///to traverse the list nodes one by one
    node*one_node = head; //move one step
    //to raverse list node by skipping one
    node*two_node = head;//move two step

    //to keep track of prev of middle
    node*prev;

    while(two_node!=NULL && two_node->next!=NULL){
        ///for prev node of middle node
        prev = one_node;

        two_node = two_node->next->next;
        one_node = one_node->next;

    }

    prev->next = prev->next->next;
    one_node->next = head;

    head = one_node;
}

void moveToFront(node*&head){

}

int main(){
    node*head =NULL;
    node*tail = NULL;

    insertAtFront(head,tail,2);
    insertAtFront(head,tail,3);
    insertAtFront(head,tail,4);
    insertAtFront(head,tail,5);

    print(head);
    cout<<"Length of linked list: "<<length(head)<<endl;
    InsertAtEnd(head,tail,1);
    InsertAtEnd(head,tail,6);

    print(head);
    cout<<"Length of linked list: "<<length(head)<<endl;

    insertAtMiddle(head,tail,3,7);
    print(head);
/*
    setMiddleHead(head);
    print(head);

*/


    return 0;
}
