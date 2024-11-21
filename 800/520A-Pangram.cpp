#include<iostream>
using namespace std;

int main(){
    int n, i;
    bool arr[26]={false};
    string str;

    cin >> n >> str;

    if(n < 26)
        cout << "NO" << endl;
    else{
        for(i = 0; i < n; i++){
            if(str[i] >= 65 && str[i] <= 90)
                arr[str[i]-65] = true;
            else
                arr[str[i]-97] = true;
        }

        for(i = 0; i < 26; i++){
            if(arr[i] == false){
                cout << "NO" << endl;
                break;
            }
        }

        if(i == 26)
            cout << "YES" << endl;
    }

    return 0;
}
