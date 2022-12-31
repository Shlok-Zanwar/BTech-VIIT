#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int board[100][100];
int boardCount = 0;

bool isAllowed(int len, int row, int column){
	int i, j;
	for(i = row-1; i >= 0; i--){
		if(board[i][column] == 1){
			return false;
		}
  	}

	for(i = row - 1, j = column - 1; i >=0, j>=0; i--, j--){
		if(board[i][j] == 1){
			return false;
		}
	}

	for(i = row - 1, j = column + 1; i >=0, j<len; i--, j++){
		if(board[i][j] == 1){
			return false;
		}
	}

	return true;
}


void printBoard(int len){
	for (int i = 0; i < len; i++){
		for (int j = 0; j < len; j++){
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

void placeNQueens(int len, int row){
	if(row == len){
		boardCount ++;
		printBoard(len);
		cout << endl;
		return;
	}

	for(int j = 0; j < len; j++){
		if (isAllowed(len, row, j)){

			board[row][j] = 1;
			placeNQueens(len, row + 1);
			board[row][j] = 0;
		}
	}
}

int main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	int len;

	cout << "Enter size : ";
	cin >> len;

	for (int i = 0; i < len; i++){
		for (int j = 0; j < len; j++){
			board[i][j] = 0;
		}
	}
	boardCount = 0;
	placeNQueens(len, 0);
	cout << "Total number of solutions : " << boardCount << endl;
}
