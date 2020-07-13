#include <iostream>

using namespace std;

int main()
{
    int k, l, importance(-1);
    cin >> k >> l;
    while (l % k == 0)
    {
        l /= k;
        importance += 1;
    }
    if (importance >= 0 && l == 1)
    {
        cout << "YES" << endl << importance << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
