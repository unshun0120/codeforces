#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int matrix[5][5], mv=0, i, j, ione, jone; //ione, jone-> 1在matrix的index

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                ione = i;
                jone = j;
            }
        }
    }

    mv = abs(ione-2) + abs(jone-2);   //center座標是(2, 2)
    cout << mv;

    return 0;
}
