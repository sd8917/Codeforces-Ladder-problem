#include <iostream>

using namespace std;

int A_Reached, A_Lost, B_Reached, B_Lost;

int main()
{
	int n;
	cin >> n;
	for (int i = 1 ; i <= n ; i++)
	{
		int t, x, y;
		cin >> t >> x >> y;
		if (t == 1)
		{
			A_Reached += x;
			A_Lost += y;
		}
		else
		{
			B_Reached += x;
			B_Lost += y;
		}
	}
	if (A_Reached >= A_Lost)
		cout << "LIVE" << endl;
	else
		cout << "DEAD" << endl;
	if (B_Reached >= B_Lost)
		cout << "LIVE" << endl;
	else
		cout << "DEAD" << endl;
	return 0;
}
