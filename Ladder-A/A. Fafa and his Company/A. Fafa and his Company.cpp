#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i=1;i<n;i++){
        if(n%i==0){
            ans++;
        }
    }
    cout<<ans;

    return 0;
}
