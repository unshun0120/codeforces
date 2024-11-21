#include<iostream>
using namespace std;

int main(){
    string str, hello="hello";
    int i, idx=0;

    cin >> str;

    for(i = 0; i < str.length(); i++){
        if(str[i] == hello[idx])
            idx++;
    }

    if(idx == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
