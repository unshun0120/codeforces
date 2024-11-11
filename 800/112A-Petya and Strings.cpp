#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int i;
    string str1, str2;

    cin >> str1 >> str2;
    for(i = 0; i < str1.length(); i++){
        if(str1[i] >= 65 && str1[i] <= 90)    //str1和str2全部轉小寫來比較
            str1[i] += 32;
        if(str2[i] >= 65 && str2[i] <= 90)
            str2[i] += 32;
        if(str1[i] > str2[i]){
            cout << "1" << endl;
            break;
        }
        if(str2[i] > str1[i]){
            cout << "-1" << endl;
            break;
        }
    }
    if(i == str1.length())
        cout << "0" << endl;

    return 0;
}
