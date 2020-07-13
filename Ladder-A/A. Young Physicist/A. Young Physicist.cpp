#include<iostream>
using namespace std;

int main(){
    int xsum = 0,ysum =0,zsum=0;
    int x,y,z;
    int n;
    cin>>n;

    while(n--){
        cin>>x>>y>>z;

        xsum += x;
        ysum += y;
        zsum += z;
    }

    if(xsum == 0 && ysum ==0 && zsum ==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
