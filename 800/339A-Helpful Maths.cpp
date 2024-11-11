#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    int i;
    vector<int> num;

    cin >> s;
    stringstream sstream(s);
    string token;

    while(getline(sstream, token, '+')){  //用stringstream做字串分割
        num.push_back(stoi(token)); //string to int
    }
    sort(num.begin(), num.end());   //vector sort

    //把sort好的數字用+串起來然後output
    cout << num[0];
    for(i = 1; i < num.size(); i++){
        cout << "+" << num[i];
    }

    return 0;
}
