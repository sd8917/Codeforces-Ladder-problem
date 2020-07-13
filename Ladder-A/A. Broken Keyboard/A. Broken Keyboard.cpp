
/*
#
include <iostream>
using namespace std;
int main() {

    int t;cin>>t;//test cases

    while(t--){
        string s;cin>>s;
        int n = s.size();

        for(int i=0;i<n;i++){
            if(s[i] == s[i+1]){
                //skip it remove from s.
                s.erase(i, i+1);
            }
        }
        cout<<s<<endl;
        s.erase();
    }
    return 0;
}
*/

#include <bits/stdc++.h>

using namespace std;

bool ans[26];

void solve() {
	string s;
	cin >> s;

	memset(ans, 0, sizeof(ans));

	for (int i = 0; i < s.size(); i++) {
		int j = i;
		while (j + 1 < s.size() && s[j + 1] == s[i])
			j++;
		if ((j - i) % 2 == 0)
			ans[s[i] - 'a'] = true;
		i = j;
	}

	for (int i = 0; i < 26; i++) if (ans[i])
		cout << char('a' + i);
	cout << endl;
}

int main() {
	int q;
	cin >> q;
	while (q--) solve();
}
