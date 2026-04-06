#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        string k;
        cin>> k;

        int first = -1, last = -1;

        for(int i=0; i<k.length(); i++) {
            if(k[i] == '1') {
                if(first == -1) first = i;
                last = i;
            }
        }

        int zero = 0;

        if(first != -1) {
            for(int i = first; i<=last; i++) {
                if(k[i] == '0') zero++;
            }
        }

        cout<< zero<< '\n';
    }

    return 0;
}