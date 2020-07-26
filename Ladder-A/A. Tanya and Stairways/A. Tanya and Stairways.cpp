#include <iostream>
using namespace std;
#include<vector>

int main() {
    int n;
    cin >> n;
    vector<int> a;
    int p = -1;

    for(int i=0;i<n;i++) {
        int x;//1
        cin >> x;//1

        if (x == 1 && p != -1)
            a.push_back(p);  //a -1
        p = x;     // p=1
    }

    a.push_back(p);//

    cout << a.size() << endl;
    for (int i: a)
        cout << i << " ";

}
