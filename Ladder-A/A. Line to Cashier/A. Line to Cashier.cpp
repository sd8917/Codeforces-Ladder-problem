#include <iostream>
using namespace std;
#include<climits>
using namespace std;

int main() {
    int n;cin>>n;//Number of the cash couter
    //Number of person at each counter
    int p[101];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }

    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        int no_person = p[i];
       // cout<<no_person<<endl;
        int total_time = 0;
        for(int j=0;j<no_person;j++){
            int item;
            cin>>item;
           // cout<<item<<endl;
            total_time = total_time + item * 5;
        }

        total_time = total_time + p[i]*15;
        //cout<<total_time<<endl;
        ans = min(ans, total_time);
        //cout<<ans<<endl;
    }
    cout<<ans;

    return 0;
}

