// https://blog.csdn.net/weixin_50961321/article/details/121331488
// 用DP

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, i;

    cin >> n;
    long long arr[n];
    int dp[n]={1};

    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(n == 1){ //長度只有1
        cout << "1";
        return 0;
    }

    for(i = 1; i < n; i++){
        if(arr[i-1] <= arr[i])
            dp[i] = dp[i-1] + 1;
        else
            dp[i] = 1;
    }

    // max_element: https://www.geeksforgeeks.org/how-to-find-the-maximum-element-of-an-array-using-stl-in-c/
    cout << *max_element(dp, dp+n);

    return 0;
}
