#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    char ch[100001];
    long long int cnt_A =0,cnt_B=0;

    for(int i=0;i<n;i++){
        cin>>ch[i];
        if(ch[i]=='A'){
            cnt_A++;
        }
        if(ch[i] == 'D'){
            cnt_B++;
        }
    }

    if(cnt_A>cnt_B){
        cout<<"Anton";
    }else if(cnt_B>cnt_A){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
    return 0;
}

