#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int i, cnt=0;
    bool ch[26]={0}; //ch[26] : 用來記每個字母出現的次數
    string str;

    cin >> str;
    for(i = 0; i < str.length(); i++)
        ch[ str[i]-97 ] = 1;

    for(i = 0; i < 26; i++){
        if(ch[i] != 0)
            cnt++;
    }

    if(cnt % 2 != 0)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;

    return 0;
}
