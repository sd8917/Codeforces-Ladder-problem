#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &s,int x){

    if(s.empty()){
        s.push(x);
        return;
    }

    int  y = s.top();
    s.pop();

    insertAtBottom(s,x);
    s.push(y);
}

void reverseStack(stack<int >&s)
{
    if(s.empty()) return ;
    int x = s.top();
    s.pop();

    reverseStack(s);
    insertAtBottom(s,x);
}



int main(){
    stack<int>s;;
    s.push(1);
    s.push(2);
    s.push(3);


    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}
