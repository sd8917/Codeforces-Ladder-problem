#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}


int main(){
    string s;
    cin>>s;
    int n = s.size();

    for(int i = 0; i <n;i++){
        if(!isVowel(s[i]) && !( s[i]=='n' || (i+1<s.size() && isVowel(s[i+1]) ) ) ){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}
