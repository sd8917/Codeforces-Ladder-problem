#include <iostream>
using namespace std;
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<int,int> >v;

    for(int i=0;i<n;i++){
        int data1,data2;
        cin>>data1>>data2;
        v.push_back(make_pair(data1,data2));
    }

    int cnt = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( (v[i].first==v[j].second)){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

    //printing ke liye tha.
    // for(int i=0;i<n;i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    return 0;
}
