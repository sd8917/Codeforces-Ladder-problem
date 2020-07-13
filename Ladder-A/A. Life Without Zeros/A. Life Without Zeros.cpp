#include <iostream>
using namespace std;

int ZeroRemover(int n){
    int i = 1;
    int neW_num = 0;
    while(n>0){
        int digit = n % 10;
        if(digit != 0){
            neW_num = digit * i+ neW_num;
            i = i * 10;
        }

        n = n / 10;
    }
    return neW_num;
}

int main() {
    int a,b;cin>>a>>b;
    //now we find a + b and remove 0 from it .
    int c = a + b;
    int checker_ans = ZeroRemover(c);
   // cout<<checker_ans<<endl;
    int ans = ZeroRemover(a) + ZeroRemover(b);
   // cout<<ans<<endl;
   if(checker_ans == ans){
       cout<<"YES";
   }else{
       cout<<"NO";
   }


    return 0;
}
