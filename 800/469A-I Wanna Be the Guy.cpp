#include<iostream>
using namespace std;

int main(){
    int n, p, q, i;

    cin >> n >> p;

    int ap[p];
    bool level[n+1]={0};

    for(i = 0; i < p; i++){
        cin >> ap[i];
        level[ap[i]] = true;
    }

    cin >> q;
    int aq[q];
    for(i = 0; i < q; i++){
        cin >> aq[i];
        level[aq[i]] = true;
    }

    for(i = 1; i <= n; i++){
        if(level[i] == false)
            break;
    }

    if(i > n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}
