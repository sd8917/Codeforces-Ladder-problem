#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
	int t;cin>>t;

	while(t--){
	    unordered_map<char,int> mp;
	    queue<char> q;
	    int n;cin>>n;
	    char ch;
	    cin>>ch;

	    int i=0;

	    while(i<n){
	        q.push(ch);
	        mp[ch]++;

	        while(!q.empty()){
	            if(mp[ch]>1){
	                q.pop();
	            }else{
	                cout<<q.front()<<" ";
	                break;
	            }
	        }

	        if(q.empty()){
	            cout<<"-1"<<" ";
	        }

	        cin>>ch;
	        i++;
	    }

	    cout<<endl;

	}
	return 0;
}
