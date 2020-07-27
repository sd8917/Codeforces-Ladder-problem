#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int n= str.size();
    unordered_map<char,int> mp;

    for(int i=0;i<n;i++){
        char curChar = str[i];
        mp[curChar]++;
    }
    int cnt = 0;
    for(auto i:mp){
        cnt++;
    }
    //i
    if(cnt&1) cout<<"IGNORE HIM!";
    else  cout<< "CHAT WITH HER!";

    return 0;
}
