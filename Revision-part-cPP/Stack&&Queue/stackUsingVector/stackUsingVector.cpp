#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    vector<int> v; ///Declare a vector
public:

    void push(int data){

        v.push_back(data);

    }

    void pop(){
        if(!v.empty()){
            v.pop_back();
        }

    }

    int top()
    {
        return v[v.size() - 1];

    }

    bool isEmpty(){
        return v.size() ==0;
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
