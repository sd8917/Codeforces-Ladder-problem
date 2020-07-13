#include <iostream>
using namespace std;
int main() {
    string str;cin>>str;

    int len = str.size();

    for(int i=0;i<len;i++){
        if(str[i]=='1' && str[i+1] =='1' && str[i+2]=='1' && str[i+3] == '1'
        && str[i+4] == '1' && str[i+ 5]=='1' && str[i+6]=='1'){
            cout<<"YES"<<endl;
            return 0;
        }

        if(str[i]=='0' && str[i+1] =='0' && str[i+2]=='0' && str[i+3] == '0'
        && str[i+4] == '0' && str[i+ 5]=='0' && str[i+6]=='0'){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;

    return 0;

}

