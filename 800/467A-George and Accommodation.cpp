#include<iostream>
using namespace std;

int main(){
    int n, p, q, room=0;

    cin >> n;

    while(n--){
        cin >> p >> q;
        if(q - p >= 2)
            room++;
    }

    cout << room << endl;

    return 0;
}
