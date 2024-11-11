#include<iostream>
using namespace std;

int main(){
    int i, n;
    double volume, orange=0;

    cin >> n;
    for(i = 0; i < n; i++){
        cin >> volume;
        orange += volume;
    }

    cout << orange/n << endl;

    return 0;
}
