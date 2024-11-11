#include<iostream>
using namespace std;

int main(){
    int n, t, i, j;
    string child;

    cin >> n >> t;
    cin >> child;

    for(i = 0; i < t; i++){
        for(j = 1; j < n; j++){
            if(child[j-1] == 'B' && child[j] == 'G'){
                swap(child[j-1], child[j]);
                j++;
            }
        }
    }

    cout << child << endl;

    return 0;
}

