// C++ program to convert whole string to
// uppercase or lowercase using STL.
#include<bits/stdc++.h>
using namespace std;

int main()
{

	string s;
    cin>>s;

	transform(s.begin(), s.end(), s.begin(), ::tolower);

    int n = s.size();
    string s2;

    for(int i=0;i<n;i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u' ||s[i] == 'y'){
            continue;
        }else{
            s2 += '.';
            s2 += s[i];
        }
    }

    cout<<s2<<endl;

	return 0;
}
