#include<iostream>
#include<cmath>
using namespace std;

// check number whether is prime number
bool notprime(int num){
	for(int i = 2; i <= sqrt(num); i++){
		if(num % i == 0)
			return true;
	}
	
	return false;
}

int main(){
	int n, ans;
	cin >> n;
	// m: 1 ~ 1000
	for(int m = 1; m <= 1000; m++){
		ans = n*m + 1;
		if( notprime(ans) ){
			cout << m << endl;
			break;
		}
	}
	
	return 0;	
} 