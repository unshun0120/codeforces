#include<iostream>
using namespace std;

int main(){
    long long int n, k;

    cin >> n >> k;

    if(n % 2 == 0 && k <= n/2){  //odd
        cout << (k-1)*2+1 << endl;
    }
    else if(n % 2 == 1 && k <= (n+1)/2){
        cout << (k-1)*2+1 << endl;
    }
    else{
        if(n % 2 == 0){
            k -= n/2;
            cout << (k-1)*2+2 << endl;
        }
        else{
            k -= (n+1)/2;
            cout << k*2 << endl;
        }
    }


    return 0;
}
