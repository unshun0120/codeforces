// https://www.youtube.com/watch?v=BKrYh08Sqv0

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n, m, a;

    cin >> n >> m >> a;
    n = n/a + (n % a != 0); //如果n/a有餘數就+1反之則加0
    m = m/a + (m % a != 0);
    cout << n * m << endl;

    return 0;
}
