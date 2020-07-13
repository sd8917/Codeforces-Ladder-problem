#include <bits/stdc++.h>
using namespace std;

int main(){

	int n, suma;
	cin >> n >> suma;

	for (int i = 0; i < n ; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i == j)
				cout << suma << ' ';
			else
				cout << "0 ";
		}
		cout << '\n';
	}

	return 0;
}
