#include<iostream>
using namespace std;
int i,n,m;
int main(){

    cin>>n>>m;

    if(n>m){
        i = m;
    }else{
        i = n;
    }

    if(i%2==0){
        cout<<"Malvika";
    }else{
        cout<<"Akshat";
    }
    return 0;
}
