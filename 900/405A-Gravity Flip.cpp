#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int i, n;

    cin >> n;
    int box[n];
    for(i = 0; i < n; i++){
        cin >> box[i];
    }

    sort(box, box+n);

    for(i = 0; i < n; i++)
        cout << box[i] << " ";

    return 0;
}
