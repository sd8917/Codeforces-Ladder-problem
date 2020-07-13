
#include<iostream>
using namespace std;

string a,b ="hello";
int j=0,pos= 0;
int main(){
    cin>>a;

    int n = a.size();

    for(int i=0;i<n;i++){
        if(a[i] == b[j]){
            j++;
            pos++;

            if(pos == 5){
                break;
            }
        }
    }

    if(pos==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO";
    }
    return 0;
}
