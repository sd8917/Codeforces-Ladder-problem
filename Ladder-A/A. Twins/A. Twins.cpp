#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	 int n;
	 cin>>n;
	 int arr[n];
	 int sum=0;
	 int cnt=0;
	 for(int i=0;i<n;i++){
		 cin>>arr[i];
		 sum+=arr[i];
	 }

	 sum=sum/2;

	 sort(arr,arr+n);

	 int sum2=0;

	 //we will pich the first large coin and subtract it from
	 //the sum till the sum becomes less then the new sum of picked element.
	 for(int i=n-1;i>=0;i--){
		 sum2+=arr[i];
		 cnt++;
		if(sum2>sum){
		 	break;
		}


	 }
	 cout<<cnt;

	return 0;
}
