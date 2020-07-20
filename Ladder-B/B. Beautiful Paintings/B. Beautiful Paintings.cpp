#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int n,x,a[1005],cnt,ans;
int main(){
	cin>>n;

	for (int i=1;i<=n;i++){
		cin>>x;
		a[x]++;
	}

	while (1){
	 if (n==0) break;
	 int cnt=0;
     for (int i=1;i<=1000;i++)
        if (a[i]) cnt++,a[i]--,n--;


     ans+=cnt-1;
    }
   cout<<ans;
}
