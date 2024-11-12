#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> color;
    int i, s;

    for(i = 0; i < 4; i++){
        cin >> s;
        color.insert(s);    //set在insert時，若insert的值已經在set出現過就會忽略掉
    }

    cout << 4-color.size() << endl; //在set中所有值都相異，再用4-set size即answer

    return 0;
}
