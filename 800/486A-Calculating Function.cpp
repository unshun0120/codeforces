// https://blog.csdn.net/weixin_50961321/article/details/121213548

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n, i;

    cin >> n;
    if(n % 2 == 0)
        cout << n/2;
    else
        cout << -(n/2+1);

    return 0;
}
