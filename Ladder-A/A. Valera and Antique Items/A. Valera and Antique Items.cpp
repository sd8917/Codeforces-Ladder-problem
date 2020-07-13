/*
#include <iostream>
using namespace std;
int main() {
    int n;cin>>n;
    int total_price;cin>>total_price;

    int cnt =0,arr[101],k=0;

    while(n--){
        int auction;cin>>auction;
        arr[k++] = auction;

        while(auction--){
            int auction_price;cin>>auction_price;

            if(auction_price<total_price){
                cnt++;
            }
        }

    }

    cout<<cnt<<endl;
    if(cnt>0){
        for(int j=0;j<cnt;j++){
            cout<<arr[j]<<" ";
        }
    }

    return 0;
}

*/

#include <iostream>
using namespace std;

int n, v, k, s, arr[51], m = 0, l = 0;
int main() {
    cin >> n >> v;

    for (int i = 1; i <= n; i++) {
        cin >> k;
        l = 0;
        for (int j = 0; j < k; j++) {
            cin >> s;
            if (s < v && l == 0) {
                arr[m] = i;
                m++;
                l = 1;
            }
        }
    }
    cout << m << endl;
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
}

