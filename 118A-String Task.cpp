#include<iostream>
#include<string>
using namespace std;

int main(){
    string str, res="", dot=".";
    int i;

    cin >> str;
    for(i = 0; i < str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y')
            continue;
        else{
            if(str[i] >= 65 && str[i] <= 90)
                str[i] += 32;
            res += dot+str[i];
        }
    }
    cout << res << endl;

    return 0;
}
