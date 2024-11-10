#include<iostream>
using namespace std;

int main(){
    int n, x=0;
    string state;

    cin >> n;
    while(n--){
        cin >> state;
        if(state == "X++" || state == "++X")
            x++;
        else
            x--;
    }
    cout << x << endl;

    return 0;
}
