#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[250];
    int n , p , q;
    cin >> n >> p; //4 3
    int count = 0;

    for(int i =  0 ; i < p ; i++){
        cin >> array[i];// 1 2 3
    }
    cin >> q;
    for(int i = p ; i < p + q ; i++){
        cin >> array[i]; // 2 3
    }

    sort(array , array+(p+q)); //1 2 2 3 3

    for(int i = 0 ; i < p+q ; i++){
        if(array[i] != array[i+1]){  //5
            count++;
        }
    }

    if(n == (count)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
