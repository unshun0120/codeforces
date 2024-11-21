#include<iostream>
#include<set>
using namespace std;

int main(){
    set<char> nums;
    string str;
    int i;

    getline(cin , str);

    for(i = 0; i < str.length(); i++){
        if(str[i] >= 97 && str[i] <= 122){
            nums.insert(str[i]);
        }
    }

    cout << nums.size() << endl;

    return 0;
}
