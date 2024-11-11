#include<iostream>
using namespace std;

int main(){
    int n, i, count=0, sol=0;
    bool sure;

    cin >> n;
    while(n--){
        count = 0;
        for(i = 0; i < 3; i++){
            cin >> sure;
            if(sure == 1)
               count++;
        }
        if(count >= 2)
            sol++;
    }
    cout << sol;

    return 0;
}
