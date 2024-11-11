#include<iostream>
using namespace std;

int main(){
    int i, n, a=0, d=0;
    string game;

    cin >> n >> game;
    for(i = 0; i < n; i++){
        if(game[i] == 'A')
            a++;
        else
            d++;
    }
    if(a > d)
        cout << "Anton" << endl;
    else if(a < d)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}
