#include<iostream>
using namespace std;

int main(){
    int n, opinion;
    bool findOne=false;

    cin >> n;

    while(n--){
        cin >> opinion;
        if(opinion == 1)
            findOne = 1;
    }

    if(!findOne)
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;

    return 0;
}
