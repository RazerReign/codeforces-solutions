#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        string alp;
        cin>> alp;

        char phile = alp[0];
        char rank = alp[1];

        for(char f = 'a'; f<='h'; ++f) {
            if(f != phile) {
                cout<< f<< rank<< '\n';
            }
        }

        for(char r = '1'; r<='8'; ++r) {
            if(r != rank) {
                cout<< phile<< r<< '\n';
            }
        }
    }

    return 0;
}