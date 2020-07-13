#include <iostream>
#include<algorithm>

using namespace std;
int main()
{
    int i,n,m,check,div_count,range,first;
    long long int count=0;
    cin>>n>>m;
    if(n>m){
        swap(m,n);
    }
    for(i=1;i<=n;i++){
        range=1;
        first=range;
        check=0;
        while((i+range)%5!=0){
            range++;
            if(range>m){
                check=1;
                break;
            }
            first=range;
        }
        if(!check){
            count++;
            div_count=(m-first)/5;
            count+=div_count;
        }
    }
    cout<<count<<endl;
    return 0;
}
