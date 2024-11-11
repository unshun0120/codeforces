// 看題目的中文翻譯 : https://zyrastory.com/coding/codeforces/codeforces-136a-presents-solution-and-translate/

#include<iostream>
using namespace std;

int main(){
    int i, n;

    cin >> n;
    int gift[n], res[n];

    for(i = 0; i < n; i++)
        cin >> gift[i];

    for(i = 0; i < n; i++)
        res[gift[i]-1] = i+1;

    for(i = 0; i < n; i++)
        cout << res[i] << " ";

    return 0;
}
