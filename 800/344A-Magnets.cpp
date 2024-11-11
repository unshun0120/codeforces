#include<iostream>
using namespace std;

int main(){
    int n, group=0;
    string curmag, prevmag;

    cin >> n;
    cin >> prevmag; //第一個magnet
    group++;
    n--;
    while(n--){
        cin >> curmag;
        if(prevmag[1] == curmag[0]){
            group++;
        }
        prevmag = curmag;
    }

    cout << group << endl;

    return 0;
}
