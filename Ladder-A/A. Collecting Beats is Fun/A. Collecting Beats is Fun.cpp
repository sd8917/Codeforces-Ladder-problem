#include <iostream>
using namespace std;
int main(){
    int k;
    int cnt[10] = {0};
    char mp[4][5];

    cin>>k;

    for (int i = 0; i < 4; i++){
        cin>>mp[i];
        for (int j = 0; j < 4; j++){
            if (mp[i][j] == '.') continue;
            else cnt[mp[i][j] - '0']++;
        }
    }

    for (int i = 1; i <= 9; i++)
        if (cnt[i] > 2 * k) {
            cout<<"NO"<<endl;
            return 0;
        }

    cout<<"YES"<<endl;
    return 0;
}
