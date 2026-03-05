#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        string k;
        cin>> k;

        int sz = k.length();

        if(sz >= 3 && k[sz-2] == 'u' && k[sz-1] == 's') {
            k[sz-2] = 'i';
            k.resize(sz-1);
            cout<< k<< '\n';
        }
        else if(sz = 2 && k[sz-2] == 'u' && k[sz-1] == 's') {
            k[sz-1] = 'i';
            k.resize(sz);
            cout<< k<< '\n';
        }
    }

    return 0;
}