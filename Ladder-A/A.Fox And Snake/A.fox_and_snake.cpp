#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    bool flag = false;
    for (int i=1; i<=n; i++) {
        if (i%2==1) {
            for (int j=1; j<=m; j++) {
                cout<<"#";
            }
        } else {
            if (!flag) {
                for (int j=1; j<=m; j++) {
                    if (j==m) { cout<<"#"; }
                    else { cout<<"."; }
                }
                flag = true;
            } else {
                for (int j=1; j<=m; j++) {
                    if (j==1) { cout<<"#"; }
                    else { cout<<"."; }
                }
                flag = false;
            }
        }
        cout<<endl;
    }

    return 0;
}
