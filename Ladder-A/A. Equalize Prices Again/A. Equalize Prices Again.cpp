#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n ;
    cin>>n;

    long long sum = 0;
    for(int i = 0 ; i < n; i++){
        int x ;
        cin>>x;
        sum += x ;
    }
    sum = ceil( (double)sum/n );
    cout<<sum<<endl;

}
int main() {
    int t ;
    cin>>t;
    while(t--)
            solve() ;

    return 0;
}
