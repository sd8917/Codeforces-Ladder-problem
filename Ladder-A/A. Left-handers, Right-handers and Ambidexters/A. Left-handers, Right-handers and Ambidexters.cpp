#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<map>
#include<vector>
#include<algorithm>
#include<cstring>
#include<sstream>
#include<cmath>
#include <iomanip>
using namespace std ;
typedef long long ll ;
typedef int in ;
typedef unsigned long long ull ;
const double pi = 2*acos(0) ;
#define maxi 40000
#define pf printf
#define sc scanf
#define pb push_back
#define MEM(x,y) (memset((x),(y),sizeof(x)))
#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define load(array,size)  for(int i=0 ; i<size ; i++) cin>>array[i]  ;
#define new_line  pf("\n")
#define clear_data(array) memset(array,0,sizeof(array))
#define highest_int 2147483647


int main()
{
    int l,r,a;
    sc("%d %d %d",&l,&r,&a);
    int total = 0;
    if(l<r)
    {
        l = l+a;
        if(l>=r)
        {
            a = l-r;
            total = r*2 + 2*(a/2);
        }
        else if(l<r)
        {
            if(a==0 && l)
            {
                total = l*2;
            }
            else if(a==0 && l==0)
                total = 0;
            else
                total = l*2;
        }

    }
    else if(r<l)
    {
        r = r +a;
        if(r>=l)
        {
            a = r-l;
            total = l*2 + 2*(a/2);
        }
        else if(r<l)
        {
            if(a==0 && r)
                total = r*2;
            else if(a==0 && r==0)
                total = 0;
            else
                total = r*2;
        }
    }
    else if(r == l)
    {
        total = (r*2) + 2*(a/2);
    }

    pf("%d",total);

    return 0;
}
