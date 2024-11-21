#include<iostream>
using namespace std;

int main(){
    int a, b, c, maxval, val1;

    cin >> a >> b >> c;

    maxval = a+b+c;
    val1 = a*(b+c);
    if(val1 > maxval)
        maxval = val1;

    val1 = a*b+c;
    if(val1 > maxval)
        maxval = val1;

    val1 = (a+b)*c;
    if(val1 > maxval)
        maxval = val1;

    val1 = a+b*c;
    if(val1 > maxval)
        maxval = val1;

    val1 = a*b*c;
    if(val1 > maxval)
        maxval = val1;

    cout << maxval << endl;

    return 0;
}
