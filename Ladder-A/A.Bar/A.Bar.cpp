#include <iostream>
using namespace std;

#include <cstdlib>
using namespace std;

const char *checker[11] = { "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN"
                        , "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
int main() {
    int n;cin>>n;
    int counter = 0;

    while(n--){
        string str;cin>>str;
        int k = 1;

        if(isdigit(str[0])){
            int age = atoi(str);

            if(age<18){
                counter++;
            }
        }else{
            while(k<=11){
                if(str != checker[k]){
                    counter++;
                }
                k++;
            }

        }
    }
    cout<<counter<<endl;

    return 0;
}

