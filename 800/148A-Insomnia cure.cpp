#include<iostream>
using namespace std;

int main(){
    int i, j, k, l, m, n, d, cnt=0;
    bool prime;
    cin >> k >> l >> m >> n >> d;

    int dragon[d+1]={0};

    if(k == 1 || l == 1 || m == 1 || n == 1)
        cout << d << endl;
    else{
        for(i = 1; i <= d; i++){
            if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0){
                dragon[i] = 1;
            }
        }

        for(i = 1; i <= d; i++){
            if(dragon[i] == 1){
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
