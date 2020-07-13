#include <iostream>
using namespace std;
#include<unordered_map>
using namespace std;
int main() {
    int ans = 0;
    int n;cin>>n;
    unordered_map<string,int>m;

    while(n--){
        string s;cin>>s;
        m[s]++;
    }
    string winner;
    for(auto i:m){
        if(i.second>ans){
            ans = max(ans ,i.second);
            winner = i.first;

        }
    }
    cout<<winner<<endl;

    return 0;
}
