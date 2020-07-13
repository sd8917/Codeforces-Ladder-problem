#include<iostream>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    int max_f, cF;


    int f,t;cin>>f>>t;
    if (t > k) max_f = f - (t-k);
    else max_f = f;
    n--;
    while (n--)
    {
        cin>>f>>t;
        if (t > k) cF = f - (t-k);
        else cF = f;
        if (cF > max_f) max_f = cF;
    }
    cout << max_f << endl;
    return 0;
}
