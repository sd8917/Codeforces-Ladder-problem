#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    ll n,l,r,minl,maxr,number;
    cin>>n>>minl>>maxr;

    for(ll i = 2 ; i <= n ; i++){
        cin>>l>>r;

        if(l<=minl && r>=maxr){
            number = i;
        }
        else if(l < minl || r> maxr){
            number = -1;
        }

        minl = min(minl, l);
        maxr = max(maxr, r);
    }

    cout<<number;

    return 0;
}
