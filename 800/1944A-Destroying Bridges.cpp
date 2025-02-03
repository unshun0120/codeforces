#include<iostream>
using namespace std;

int main(){
	int t, n, k;
	cin >> t;
	
	while(t--){
		cin >> n >> k;
		// Island 1 有n-1個edges連到其他island
		// 如果k >= n-1即可把island1所有連出去的edge打斷
		// 如果k < n-1, 最糟的情況下island1仍有最後一條連到其他island的edge
		// 而因為是complete graph的關係所以仍然可以透過唯一這條edge連到其他island 
		if(k >= (n-1)){
			cout << "1" << endl;
		}
		else{
			cout << n << endl;
		}
		
	}
	
	return 0;	
} 