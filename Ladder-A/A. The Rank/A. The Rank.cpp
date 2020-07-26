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

bool cmp(pp a , pp b)
{
    if(a.second==b.second)
        return a.first<b.first;

    return  a.second>b.second;
}

int main()
{
    // freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int a,b,c,d;

    sf(n);
    pp v[n];

    for(i=0;i<n;i++)
    {
        sff(a,b);
        sff(c,d);

        v[i]={i+1,a+b+c+d};
    }

    sort(v,v+n,cmp);

    for(i=0;i<n;i++)
    {
        if(v[i].first==1)
        {
            pf(i+1);
            return 0;
        }
    }

    return 0;
}
