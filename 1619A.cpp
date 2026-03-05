#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        string s;
        cin>> s;

        int sz = s.size();

        if(sz % 2 == 1) {
            cout<< "No \n";
            continue;
        }

        string k = s.substr(0, sz/2);
        string l = s.substr(sz/2);

        if(k==l) {
            cout<< "Yes \n";
        }
        else {
            cout<< "No \n";
        }
    }


    return 0;
}