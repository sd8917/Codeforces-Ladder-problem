#include<bits/stdc++.h>
using namespace std;

double findEdges(double s1,double s2, double s3){
    double a = sqrt(s1*s2 / s3);
    double b = sqrt(s3*s1 / s2);
    double c = sqrt(s3*s2 / s1);

    //sum of all the edges of one side
    double sum = a + b +c;

    /// net sum will be equal to the
    /// summation of edges of all the sides

    return 4*sum;
}

int main(){

    double s1,s2,s3;
    cin>>s1>>s2>>s3;

    cout<<findEdges(s1,s2,s3)<<endl;

    return 0;
}
