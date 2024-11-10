#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string letter;
    int i;

    cin >> letter;
    for(i = 0; i < letter.length(); i++){
        if(i == 0 && letter[0] >= 97 && letter[0] <= 122)
            cout << (char)(letter[0] - 32);
        else
            cout << letter[i];
    }

    return 0;
}
