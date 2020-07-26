#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg cout("in\n")
#define nl cout("\n");
#define N 200100


#define sf(n) cin>>n;
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) cout<<n
#define pfl(n) cout<<n
#define pfs(s) cout<<n

#define pb push_back
#define pp pair<int,int>

using namespace std;



int main()
{
    // freopen("in.txt", "r", stdin);
    int n;cin>>n;
    unordered_map<int,int> mp;
    int cnt_0=0,cnt_1=0;

    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a==0){
            cnt_0++;
        }else if(a==1){
            cnt_1++;
        }
    }

    if(cnt_0==n){
        cout<<"EASY";
    }else {
        cout<<"HARD";
    }
    return 0;
}
