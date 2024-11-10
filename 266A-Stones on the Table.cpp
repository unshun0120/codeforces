#include<iostream>
using namespace std;

int main(){
    int n, i, cnt=0;
    string str;

    cin >> n >> str;
    for(i = 1; i < str.length(); i++){
        if(str[i] == str[i-1])
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}
