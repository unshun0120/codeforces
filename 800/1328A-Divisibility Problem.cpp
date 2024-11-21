//https://zyrastory.com/en/coding-en/codeforces-en/codeforces-1328a-divisibility-problem-solution-and-explanation-en/
//Solution : 
// We calculates the remainder of the division a % b and stores it in the variable left.
// If left is already 0, meaning that a is already divisible by b, it outputs 0 moves. 
// Otherwise, it prints the difference between b and left, indicating the minimum number of moves needed to make a divisible by b.

#include<iostream>
using namespace std;

int main(){
    int t;
    long long a, b;

    cin >> t;
    while(t--){
        cin >> a >> b;

        if(a % b == 0)
            cout << 0 << endl;
        else
            cout << b - (a % b) << endl;
    }

    return 0;
}
