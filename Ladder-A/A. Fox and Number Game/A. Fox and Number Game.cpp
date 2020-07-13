#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, g;
    cin >> n;
    while(n--){
        int t;cin>>t;
        g = __gcd(g, t);

    }
    cout << n * g << endl;
    return 0;
}
