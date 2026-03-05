#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;

    while(t--) {
        string luckornot;
        cin>> luckornot;

        if(luckornot[0]+luckornot[1]+luckornot[2] == luckornot[3] + luckornot[4] + luckornot[5]) {
            cout<< "Yes \n";
        }
        else {
            cout<< "No \n";
        }
    }

    return 0;
}