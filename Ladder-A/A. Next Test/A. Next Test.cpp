#include <iostream>
using namespace std;

bool ans[3001] = {false};
int main() {

    int n;cin>>n;
    int a[3001];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
        ans[a[i]] = true;
    }

    int k = 1;
    while(true && k<3001){
        if(ans[k] == false){
            cout<<k<<endl;
            break;
        }
        k = k+1;
    }

    return 0;
}
