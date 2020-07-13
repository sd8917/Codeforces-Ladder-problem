#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>()); ///sorting in descending order
    int rr = 0;
    for (int i = 0; i < n; ++i)
    {
        rr += a[i] * a[i] * (1 - i % 2 * 2);
    }
    double pi = asin(1) * 2;
    cout << fixed << setprecision(10) << (pi * rr) << endl;
    return 0;
}
