#include<iostream>
using namespace std;

int main(){
    string str;
    int i, idx=0;
    bool start=1;   //消除第一個space

    cin >> str;
    if(str.length() < 3)
        cout << str << endl;
    else{
        for(i = 0; i < str.length()-2; i++){
            if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
                i += 2;
            }
            else{
                if(i-1 != idx && start == 0)
                    cout << " ";
                else if(i-1 != idx && start == 1)
                    start = 0;
                cout << str[i];
                idx = i;
            }
        }
        //cout  << endl << str.length() << " " << i << " " << idx<< endl;
        if(i != str.length()){
            if(idx != 0 && idx+1 != i)
                cout << " ";
            for(int j = i; j < str.length(); j++)
                cout << str[j];
        }
    }


    return 0;
}
