#include<iostream>
using namespace std;

int main(){
    string player;
    int i, stand=1;

    cin >> player;
    for(i = 1; i < player.length(); i++){
        if(player[i] == '0' && player[i-1] == '0')
            stand++;
        else if(player[i] == '1' && player[i-1] == '1')
            stand++;
        else
            stand = 1;

        if(stand == 7){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
