#include<iostream>
using namespace std;


int main(){
    string s;
    cin>>s;
    int counter4=0,counter7=0;
    int n = s.size();

    for(int i = 0 ;i<n;i++){
        if(s[i] == '4'){
            counter4++;
        }
        else if(s[i] == '7'){
            counter7++;
        }
    }


    if (counter4 == 0 && counter7 == 0)cout<<-1;
    else if (counter4 >= counter7)cout<<4;
    // else if(counter4 == counter7) cout<<4;
    else cout<<7;


    return 0;
}
