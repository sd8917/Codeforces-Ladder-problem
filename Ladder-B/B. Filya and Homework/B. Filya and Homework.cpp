#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];

	sort(a.begin(),a.end());

	vector<int>::iterator length;

	 length = unique(a.begin(),a.end());


    a.resize(distance(a.begin(),length));

	if(a.size()<3)
		cout<<"YES"<<endl;

	else if(a.size()==3)
	{
		if(a[0]+a[2]==2*a[1])
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}
