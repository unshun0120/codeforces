// 把所有'.'換成是dog, 再去看每隻wolf附近有沒有sheep, 
// 有的話就輸出No, 全部wolf都沒有的話就輸出Yes
#include<iostream>
using namespace std;

int main(){
	int r, c;
	cin >> r >> c;
	// 宣告pasture時讓他上下左右加寬一格(redundant bit)，在考慮邊界條件時比較不會複雜
	char pasture[r+2][c+2];
	for(int i = 0; i <= r+1; i++){
		for(int j = 0; j <= c+1; j++){
			if(i == 0 || i == r+1 || j == 0 || j == c+1)
				pasture[i][j] = 'D';
			else
				cin >> pasture[i][j];
			// place the dogs when input is '.'
			if(pasture[i][j] == '.')
				pasture[i][j] = 'D';
		}
	}
	// check whether there exits the sheeps around the wolf
	for(int i = 1; i <= r; i++){
		for(int j = 1; j <= c; j++){
			if(pasture[i][j] == 'W'){
				if(pasture[i-1][j] == 'S' || pasture[i+1][j] == 'S' || pasture[i][j-1] == 'S' || pasture[i][j+1] == 'S'){
					cout << "No" << endl;
					return 0;
				}
			}
		}
	}
	// output
	cout << "Yes" << endl;
	for(int i = 1; i <= r; i++){
		for(int j = 1; j <= c; j++){
			cout << pasture[i][j];
		}
		cout << endl;
	}
	
	return 0;
} 