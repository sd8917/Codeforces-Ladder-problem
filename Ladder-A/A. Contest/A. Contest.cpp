#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;cin>>a>>b>>c>>d;

    int Misha = 0;
    int Vasya = 0;

    Misha = max( (3*a/10),(a-(a*c/250)));
    //cout<<Misha<<endl;
    Vasya = max( (3*b/10),(b-(b*d/250)));

    if(Misha>Vasya){
        cout<<"Misha";
    }else if(Misha<Vasya){
        cout<<"Vasya";
    }else{
        cout<<"Tie";
    }

    return 0;
}
