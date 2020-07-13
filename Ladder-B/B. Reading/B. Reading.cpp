#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100005
#define inf 10000000
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int i, j, k;
	int n, m;

	cin>>n>>k;

	pp *a = new pp[n];

	for (i = 0; i < n; i++)
	{
		cin>>j;
		a[i] = make_pair(j,i);
	}

	sort(a, a + n, greater<pp>());

	cout<<a[k-1].first<<endl;
	for (i =0; i <k; i++)
		cout<<a[i].second+1<<" ";

	return 0;
}
