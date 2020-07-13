#include <iostream>
using namespace std;

int main()
{
    int n, l= 1, ml =1; //l- current lenght and ml - max length sequence.
    cin >> n;
    int profits[n];

    for (int i = 0; i < n; i++)
    {
        cin >> profits[i];
        if (i > 0)
            if (profits[i] >= profits[i - 1])
            {
                l++;
                ml = max(ml, l); //updating to check the max length of increasing sequence
            }
            else
                l = 1;
    }

    cout << ml << endl;
    return 0;
}
