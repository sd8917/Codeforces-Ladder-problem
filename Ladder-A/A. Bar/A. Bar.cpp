
#include<bits/stdc++.h>
using namespace std;

int mkItInt(string str){
    int val = 0,len = str.size();
    for(int i = 0; i < len; i++){
        val = val * 10 + str[i] - 48;
    }
    return val;
}

bool check_alco(string str){

    bool OK = true;
    string alco[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};

    for(int i = 0; i < 11; i++){
        if(str == alco[i]){
            OK = false;
            break;
        }
    }
    return OK;
}

bool check_ageOralco(string str){

    if(str[0]>= 48 && str[0] <= 57)return true;
    else return false;

}
int main(){


    int n,cnt = 0;
    string str;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str;

        if(check_ageOralco(str) == true && mkItInt(str) < 18)cnt++;
        if(check_ageOralco(str) == false && check_alco(str) == false)cnt++;
    }
    cout << cnt << endl;
    return 0;

}
