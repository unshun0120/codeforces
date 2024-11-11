#include<iostream>
using namespace std;

int main(){
    int n, x, y, z, cor[3]={0};

    cin >> n;
    while(n--){
        cin >> x >> y >> z;
        cor[0] += x;
        cor[1] += y;
        cor[2] += z;
    }

    if( cor[0] == 0 && cor[1] == 0 && cor[2] == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
