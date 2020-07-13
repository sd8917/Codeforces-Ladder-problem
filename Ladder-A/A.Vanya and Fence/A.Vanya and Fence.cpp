#include<iostream>
using namespace std;

int main() {
    int n;cin>>n;
    int k;cin>>k;
    int a[10001];
    int width = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>k){
           width = width + 2;
        }
        else{
            width = width + 1;
        }
    }

    cout<<width<<endl;

    return 0;
}
