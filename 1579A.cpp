#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        string k;
        cin>> k;

        int cnt1=0, cnt2=0, cnt3=0;

        for(char c:k) {
            if(c == 'A') cnt1++;

            else if(c == 'B') cnt2++;

            else cnt3++;
        }

        if(cnt1+cnt3 == cnt2) {
            cout<< "YES"<< '\n';
        }

        else {
            cout<< "NO"<< '\n';
        }
    }

    return 0;
}