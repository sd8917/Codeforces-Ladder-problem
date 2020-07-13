#include<iostream>
using namespace std;
/*

"H" prints "Hello, World!",
"Q" prints the source code of the program itself,
"9" prints the lyrics of "99 Bottles of Beer" song,
"+" increments the value stored in the internal accumulator.

*/

#include <iostream>
using namespace std;
int main() {
    string str;
    cin>>str;

    int len = str.size();
    for(int i=0;i<len;i++){
        if( str[i]=='H' || str[i]=='Q' || str[i]=='9' ){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;

    return 0;
}

