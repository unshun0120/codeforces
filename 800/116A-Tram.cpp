#include<iostream>
using namespace std;

int main(){
    int n, a, b, curcap=0, maxcap=0;

    cin >> n;
    while(n--){
        cin >> a >> b;
        curcap += b - a;
        if(curcap > maxcap)
            maxcap = curcap;
    }

    cout << maxcap << endl;

    return 0;
}
