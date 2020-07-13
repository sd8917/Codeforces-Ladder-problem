/*
#include<iostream>
using namespace std;
int a,b,c,d;
int ans[3] ={0};
int main(){
    cin>>a>>b>>c>>d;

    while(1){
        ///common for three cases
        if(a==c && b == d){
            ans[0] = ans[1]=ans[2] = 0;
        }


        else{

            //case second for Bishop

			if (a == c || b == d)
				ans[0] = 1;
			else
				ans[0] = 2;
			if ((abs(a- b) + abs(c - d)) % 2 == 0){
				if (abs(a - c) == abs(b - d))
					ans[1] = 1;
				else
					ans[1] = 2;
			}
			else
				ans[1] = 0;

            //case 3 for king

			if (abs(a - c) > abs(b - d))
				ans[2] += abs(a - b);
			else
				ans[2] += abs(c - d);
		}

		cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;

        break;
    }
}
*/

#include<stdio.h>
#define ABS(x) ( (x) >= 0 ? (x) : -(x))
int main(){
	int x1, x2, y1, y2;
	while (scanf("%d%d%d%d", &x1, &y1, &x2, &y2) == 4){
		int ans[3] = { 0 };
		if (x1 == x2&&y1 == y2)
			ans[0] = ans[1] = ans[2] = 0;
		else{
			if (x1 == x2 || y1 == y2)
				ans[0] = 1;
			else
				ans[0] = 2;
			if ((ABS(x1 - x2) + ABS(y1 - y2)) % 2 == 0){
				if (ABS(x1 - x2) == ABS(y1 - y2))
					ans[1] = 1;
				else
					ans[1] = 2;
			}
			else
				ans[1] = 0;
			if (ABS(x1 - x2) > ABS(y1 - y2))
				ans[2] += ABS(x1 - x2);
			else
				ans[2] += ABS(y1 - y2);
		}
		printf("%d %d %d\n", ans[0], ans[1], ans[2]);
	}
	return 0;
}
