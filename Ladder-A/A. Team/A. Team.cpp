#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    int problem_solved = 0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;

        int sum = a+b+c;
        if(sum>=2){
            problem_solved++;
        }
        sum = 0;
    }

    cout<<problem_solved;

    return 0;
}
/*




*/
