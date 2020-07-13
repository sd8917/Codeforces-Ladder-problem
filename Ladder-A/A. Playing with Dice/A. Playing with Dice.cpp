#include <iostream>
#include<cmath>

using namespace std;
int main() {
    //declare three counter
    int c1=0,c2=0,c3 =0;
    int a,b;cin>>a>>b;

    for(int i=1;i<=6;i++){
        if( (abs(a-i)<abs(b-i)) ){
            c1++;
        }else if( (abs(a-i)>abs(b-i)) ){
            c2++;
        }else{
            c3++;
        }
    }

    cout<<c1<<" "<<c3<<" "<<c2<<endl;
    return 0;
}

