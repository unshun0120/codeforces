#include<iostream>
using namespace std;

int main(){
    int n;

    cin >> n;
    int f[n+1];

    for(int i = 1; i <= n; i++){    //first number is stored in f[1]
        cin >> f[i];
    }

    for(int i = 1; i <= n; i++){    // check Love Triangle
        if(i == f[f[f[i]]]){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
