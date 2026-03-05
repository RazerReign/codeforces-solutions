#include <iostream>
#include <string>
using namespace std;

int main() {

    string alp, alpp;

    cin>> alp>> alpp;

    for(int i=0; i<(int)alp.length();i++) {

        char c1 = tolower(alp[i]);
        char c2 = tolower(alpp[i]);

        if(c1<c2) {
            cout<< "-1";
            return 0;
        }

        else if(c1>c2) {
            cout<< "1";
            return 0;
        }
        }

    cout<< "0";

    return 0;
}