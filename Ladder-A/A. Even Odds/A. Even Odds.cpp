/*#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}
*/

#include <iostream>
using namespace std;
#include<vector>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int >v;
    v.push_back(1);
    for(int i=2;i<=n;i++){

        if(i%2!=0){
            v.push_back(i);
        }

    }

    for(int i=1;i<=n;i++){
        if(i%2==0){
            v.push_back(i);
        }
    }

    //now we have vector will the element first is even

    cout<<v[k-1];

    return 0;

}


