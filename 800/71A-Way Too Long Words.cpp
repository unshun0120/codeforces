#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    string str;

    cin >> n;
    while(n--){
        cin >> str;
        if( str.length() <= 10){
            cout << str << endl;
        }
        else{
            cout << str[0] << str.length()-2 << str[str.length()-1] << endl;
        }
    }

    return 0;
}
