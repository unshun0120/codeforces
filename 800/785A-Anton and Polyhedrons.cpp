#include<iostream>
using namespace std;

int main(){
    int n, face=0;
    string poly;

    cin >> n;

    while(n--){
        cin >> poly;
        if(poly == "Tetrahedron")
            face += 4;
        else if(poly == "Cube")
            face += 6;
        else if(poly == "Octahedron")
            face += 8;
        else if(poly == "Dodecahedron")
            face += 12;
        else
            face += 20;
    }

    cout << face << endl;

    return 0;
}
