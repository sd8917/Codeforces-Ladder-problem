#include <iostream>
using namespace std;
int main() {
    int n;cin>>n; //No_of_song;
    int t;cin>>t;//Total time each song take
    ///Remember we will have to wait 10 sec. after each song complete
    //All song must be played.
    int si;int jokes = 0;
    int songs[10001];
    for(int i=0;i<n;i++){
       cin>>songs[i];
    }

    for(int i=0;i<n;i++){

        if(i==n-1){
            t = t - songs[i];
            break;
        }
        else{
            t = t - songs[i] - 10;
        }
         //t = 30 - 2 -10  =18 // t = 18 -2 -10 = 6 // t = 6 -1
         jokes = jokes + 2;
    }
    while(t>=5){
        t = t - 5;
        jokes = jokes + 1;
    }
    if(t<0){
        cout<<"-1";
        return 0;
    }

    cout<<jokes<<endl;
    return 0;
}

