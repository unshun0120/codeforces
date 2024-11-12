#include<iostream>
#include<vector>
using namespace std;

int main(){
    int i;
    string num1, num2;
    vector<int> ans;

    cin >> num1 >> num2;

    for(i = 0; i < num1.length(); i++){
        if(num1[i] == num2[i])
            ans.push_back(0);
        else
            ans.push_back(1);
    }

    for(i = 0; i < ans.size(); i++){
        cout << ans[i];
    }

    return 0;
}
