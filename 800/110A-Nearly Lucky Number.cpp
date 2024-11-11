#include<iostream>
using namespace std;

int main(){
    long long n, lucknum=0;

    cin >> n;
    while(n > 0){
        if(n % 10 == 7 || n % 10 == 4){
            lucknum++;
        }
        n /= 10;
    }

    if(lucknum == 4 || lucknum == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
