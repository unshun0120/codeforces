#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int i, n, curr=0, total=0, coinNum=0;
    cin >> n;

    int arr[n];
    for(i = 0; i < n; i++){
        cin >> arr[i];
        total += arr[i];
    }

    sort(arr, arr+n, greater<int>());

    for(i = 0; i < n; i++){
        curr += arr[i];
        total -= arr[i];
        coinNum++;
        if(curr > total)
            break;
    }

    cout << coinNum << endl;

    return 0;
}
