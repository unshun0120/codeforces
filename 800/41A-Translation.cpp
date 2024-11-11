#include<iostream>
using namespace std;

int main(){
    int i=0;
    string s, t;

    cin >> s >> t;

    if(s.length() == t.length()){
        for(i = 0; i < s.length(); i++){
            if(s[i] != t[s.length()-i-1])
                break;
        }
    }

    if(i == s.length())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
