#include <iostream>
#include<unordered_map>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    unordered_map<char,int> m;

    int len = str.size();
    for(int i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z'){
            m[str[i]]++;
        }
    }

    int cnt =0;
    for(auto i:m){
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
