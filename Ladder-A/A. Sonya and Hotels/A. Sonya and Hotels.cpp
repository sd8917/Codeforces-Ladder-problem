#include <iostream>
#include <vector>
using namespace std;
int main(){

    long long int n, d; cin>>n>>d;
    std::vector<long> x(n);
    for(long p = 0; p < n; p++){
            cin>>x[p];
    }

    long cnt(2);

    for(long p = 1; p < n; p++){

            cnt += (x[p] - x[p - 1] == 2 * d) + 2 * (x[p] - x[p - 1] > 2 * d);
    }
    cout<<cnt;

    return 0;
}
