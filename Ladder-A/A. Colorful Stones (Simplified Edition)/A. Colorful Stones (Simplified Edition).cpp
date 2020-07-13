#include<iostream>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;

    int n= t.size();

    int pos = 0;

    for(int i=0;i<n;i++){
        if(t[i] == s[pos]){
            pos+=1;
        }
    }
    cout<<pos+1<<endl;

    return 0;

}
