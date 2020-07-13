
#include<bits/stdc++.h>
using namespace std;
int main()
{
        freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);

        int i,j,k;
        int n,x;

        cin>>n;
        char s[n+1];


        cin>>s;

        j=n/2;
        for(i=0;i<n/2;i++)
        {
            if(s[i]=='L' && s[j]=='R')
                cout<<i+1<<" "<<j+1<<endl;
            else
                cout<<j+1<<" "<<i+1<<endl;


            j++;
        }

        return 0;
}

