#include <iostream>
#include<cmath>

using namespace std;
int main() {
    int n,k;cin>>n>>k;
    int a[10001];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int cnt =0;
    for(int i=0;i<n;i++){
        if(5-a[i]>=k){
            cnt++;
        }
    }
    int ans = cnt/3;

    cout<<ans<<endl;

    return 0;
}


