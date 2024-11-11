#include<iostream>
using namespace std;

int main(){
    bool distinct=false;
    int y, first, second, third, fourth;

    cin >> y;
    y++;
    while(!distinct){
        first = y/1000;
        second = y/100%10;
        third = y%100/10;
        fourth = y%10;
        if(first == second || first == third || first == fourth || second == third || second == fourth || third == fourth)
            y++;
        else
            distinct = true;
    }

    cout << y << endl;

    return 0;
}
