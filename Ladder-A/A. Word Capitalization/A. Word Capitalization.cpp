#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;cin>>str;
    int  n =str.size();

    if(str[0]<=122 && str[0]>=97){
        str[0] = toupper(str[0]);
    }

    cout<<str;

    return 0;
}
