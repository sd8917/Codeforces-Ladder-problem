#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){

    ll n;cin>>n;
    vector<int> v(n);

    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    ll ans = 0;

    for(int i=0;i<n;i++){
        ll j = i,cnt =1;
        /// left mei check kro is less than

        while(j>=0 && v[j]>=v[j-1]){
            cnt++;
            j--;
        }
        j = i;

        /// right mei check

        while(j<n && v[j] >= v[j+1]){
            cnt++;
            j++;
        }
        ans = max(ans,cnt);
    }

    cout<<ans<<endl;

    return 0;
}
