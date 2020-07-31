#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll n;cin>>n;;
    int k;cin>>k;

    ll i =0;
    while(i<k && n>0){
        if(n%10 == 0){
            //cout<<n<<endl;
            n = n/10;
        }else if(n%10!=0){
            //cout<<"else bloack";
            n = n - 1;
            //cout<<n<<endl;
        }

        i++;
    }

    cout<<n;

    return 0;
}
