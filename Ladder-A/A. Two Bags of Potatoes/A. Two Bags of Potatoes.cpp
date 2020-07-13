#include<iostream>
using namespace std;

int main(){
    int y,k,n;cin>>y>>k>>n;
    int x = k - y%k; // 2 se start kra for test case 2

    int top = n - y;

    if(x<=top){
        cout<<x<<" ";
        x += k;

        while(x<=top){
            cout<<x<<" ";
            x += k;
        }

    }
    else{
        cout<<"-1";
    }
    return 0;

}
