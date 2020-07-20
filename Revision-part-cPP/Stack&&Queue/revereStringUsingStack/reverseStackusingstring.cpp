#include<bits/stdc++.h>
#include<stack>
using namespace std;

void reverseString(char *ch,int n){
    stack<char> s;
    //loop for push
    for(int i=0;i<n;i++){
        s.push(ch[i]);
    }

    //loop for pip
    for(int i=0;i<n;i++){
        ch[i] = s.top();
        s.pop();
    }

}
int main(){

    char ch[101];
    cin>>ch;
    int n = strlen(ch);
    reverseString(ch,n);
    cout<<ch;

}
