#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    unordered_set<ll> mp;
    mp.insert(a);
    mp.insert(b);
    mp.insert(c);
    mp.insert(d);

    //iterate ove rthe set
    ll n= mp.size();
   cout<<4-n;

    return 0;
}
