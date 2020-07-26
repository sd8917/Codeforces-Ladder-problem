#include <iostream>
using namespace std;
#include<unordered_map>
using namespace std;

int main() {
    int n;cin>>n;
    unordered_map<int,int>mp;
    int ans =0;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        mp[data]++;
    }

    for(auto i:mp){
        if(i.second>ans){
            ans = i.second;
        }
    }
    cout<<ans<<" ";

    return 0;

}
