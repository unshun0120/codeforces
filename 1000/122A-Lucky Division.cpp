#include<iostream>
using namespace std;

int main(){
    int i, n;
    int lucky[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    cin >> n;

    for(i = 0; i < 14; i++){
        if(n % lucky[i] == 0){
            break;
        }
    }

    if(i == 14)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}
