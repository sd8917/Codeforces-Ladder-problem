
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    ll n,m;
    ll x,y;

    cin>>n>>m;

    while(1)
    {
        if(n==0 || m==0)
            break;

        if(n<2*m && m<2*n)
            break;

        if(n>=2*m)
        {
            x=n/(2*m);
            n-=(x*2*m);
        }

        else
        {
             x=m/(2*n);
             m-=(x*2*n);
        }
    }

    cout<<n<<" "<<m;

    return 0;
}
