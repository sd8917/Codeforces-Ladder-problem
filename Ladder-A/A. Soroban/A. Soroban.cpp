
#include <iostream>
#include <vector>
using namespace std;

vector<int> digitize(long input){
    vector<int> output;
    do{output.push_back(input%10); input /= 10;} while(input);
    return output;
}


void printDigit(int digit){
    if(digit < 5){cout<<"O-|";} else{cout<<"-O|"; digit -= 5;}

    for(int k = 0; k < digit; k++){cout<<"O";}
    cout<<"-";

    for(int k = 0; k < 4 - digit; k++){cout<<"O";}
    cout<<endl;
}

int main(){

    long n(0); cin>>n;
    vector<int> digits = digitize(n);

    for(int k = 0; k < digits.size(); k++){printDigit(digits[k]);}
    return 0;
}
