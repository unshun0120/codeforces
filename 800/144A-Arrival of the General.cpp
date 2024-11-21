#include<iostream>
using namespace std;

int main(){
    int n, i, maxi=0, mini=0;

    cin >> n;
    int arr[n];

    for(i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > arr[maxi])
            maxi = i;
        if(arr[i] <= arr[mini])
            mini = i;
    }

    if(maxi < mini){    //如果max在min左邊
        cout << maxi-1 + n-mini << endl;
    }
    else{   //如果max在min右邊
        cout << maxi-1 + n-mini - 1 << endl;
    }

    return 0;
}
