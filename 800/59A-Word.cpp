#include<iostream>
using namespace std;

int main(){
    int i, upper=0, lower=0;
    string s;

    cin >> s;
    for(i = 0; i < s.length(); i++){    //計算大小寫出現的次數
        if(s[i] >= 65 && s[i] <= 90)
            upper++;
        else
            lower++;
    }

    if(upper > lower){
        for(i = 0; i < s.length(); i++){
            if(s[i] >= 97 && s[i] <= 122)
                s[i] -= 32;
        }
    }
    else{
        for(i = 0; i < s.length(); i++){
            if(s[i] >= 65 && s[i] <= 90)
                s[i] += 32;
        }
    }

    cout << s << endl;

    return 0;
}
