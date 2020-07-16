#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    char board[101][101];
    int pig_count = 0;
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>board[i][j];

        }
    }

    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            if((board[i][j] == 'W' && board[i][j-1] == 'P') ||
                (board[i][j] == 'W' && board[i][j+1] == 'P') || (board[i][j] == 'W' && board[i+1][j] == 'P')
                || (board[i][j] == 'W' && board[i-1][j] == 'P')){
                    pig_count++;
                }
        }
    }
    cout<<pig_count;


    return 0;
}
