#include <iostream>
#include<deque>
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

void InsertAtEnd(node* &head,node*&tail,int data){
	if(head == NULL){
		head = tail= new node(data);
	}
	else{
		node*n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void*EvenOdd(node*&head){
    node*temp = head;
    deque<int>q;

    while(temp!=NULL){
        if(temp->data%2==0){
            q.push_front(temp->data);
        }else{
            q.push_back(temp->data);
        }
        temp = temp->next;
    }

    temp = head;

    while(!q.empty()){
        temp->data = q.front();
        q.pop_front();
        temp = temp->next;
    }
}

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    node*head = NULL;
	    node*tail = NULL;
	    int n;cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int data;cin>>data;
	        InsertAtEnd(head,tail,data);

	    }
	    //print(head);
	    EvenOdd(head);
	    print(head);


	}
	return 0;
}
