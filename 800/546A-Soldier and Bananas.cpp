#include<iostream>
using namespace std;

int main(){
    long long k, n, w, i, cost=0;

    cin >> k >> n >> w;
    for(i = 1; i <= w; i++){
        cost += i*k;
    }

    if(cost <= n)
        cout << "0" << endl;
    else
        cout << cost-n << endl;

    return 0;
}
