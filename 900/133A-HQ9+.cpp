#include<iostream>
using namespace std;

int main(){
    int i;
    string str;

    cin >> str;

    for(i = 0; i < str.length(); i++){
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
            break;
        }
    }

    if(i == str.length())
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}
