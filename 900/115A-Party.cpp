//參考reference: https://chucs.github.io/Party/
// https://www.cnblogs.com/yangykaifa/p/6940924.html
// 對每位員工找出上級-下屬關係最多層的數量就是答案

#include<iostream>
using namespace std;

int temp=0;

void dfs(int upper, int emp[]){
    temp++;
    if(emp[upper] == -1)
        return ;
    else
        dfs(emp[upper], emp);
}


int main(){
    int n, max_group=0;

    cin >> n;
    int emp[n+1];

    for(int i = 1; i <= n; i++){
        cin >> emp[i];
    }

    for(int i = 1; i <= n; i++){
        temp = 0;
        dfs(i, emp);
        max_group = max(max_group, temp);
    }

    cout << max_group << endl;

    return 0;
}
