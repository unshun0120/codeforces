#include<iostream>
using namespace std;

int main(){
    int testcase, n, reach_pawns=0;
    bool nopawns=true;
    cin >> testcase;

    while(testcase--){  //testcase
        cin >> n;   //board size
        string enemy="", pawn="";
        string digits="";
        nopawns = true;
        reach_pawns = 0;

        cin >> enemy;   //input enemy

        cin >> pawn;    //input pawns
        for(int i = 0; i < n; i++){    // check whether the pawn exist
            if(pawn[i] == '1')
                nopawns = false;
        }

        if(nopawns){   //if there is no pawns
            cout << "0" << endl;
            continue;
        }

        //compute the maximum number of every pawns that reach row 1
        for(int i = 0; i < n; i++){
            if(pawn[i] == '1'){ //if there is a pawn
                if(i == 0){  //the leftest pawn
                    if(enemy[i] == '0') // the top enemy not exist
                        reach_pawns++;
                    else if(enemy[1] == '1'){   // the top right corner enemy exist
                        enemy[1] = '0';
                        reach_pawns++;
                    }
                }
                else if(i == n-1){  //the rightest pawn
                    if(enemy[i] == '0') // the top enemy not exist
                        reach_pawns++;
                    else if(enemy[n-2] == '1'){ // the top left corner enemy exist
                        enemy[n-2] = '0';
                        reach_pawns++;
                    }
                }
                else{    //the other pawns
                    if(enemy[i] == '0') // the top enemy not exist
                        reach_pawns++;
                    else if(enemy[i-1] == '1'){ // the top left corner enemy exist
                        enemy[i-1] = '0';
                        reach_pawns++;
                    }
                    else if(enemy[i+1] == '1'){ // the top right corner enemy exist
                        enemy[i+1] = '0';
                        reach_pawns++;
                    }
                }
            }
        }

        cout << reach_pawns << endl;
    }


    return 0;
}
