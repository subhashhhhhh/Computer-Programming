#include "stdc++.h"
#define N 4
using namespace std;

void printsolution(int board[N][N]){
    for (int i=0; i < N; i++){
        for(int j=0; j<N; j++)
        if(board[i][j])
        cout << "Q";
        else cout << ". ";
    printf("\n");
    }
}
bool issafe(int board[N][N], int row, int col){
    int i,j;
    for (i=0; i<col; i++)
    if (board[row][i])
    return false;
}
