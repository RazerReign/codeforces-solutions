#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}


int main() {
    string k;
    cin>> k;

    int sz = k.length();

    bool valid = true;

    for(int i=0; i<sz-1; i++) {
        if(!vowel(k[i]) && k[i] != 'n') {
            if(!vowel(k[i+1])) {
                valid = false;
                break;
            }
        }
    }

    if(!vowel(k[sz-1]) && k[sz-1] != 'n') {
        valid = false;
    }

    cout<< (valid ? "YES" : "NO")<< '\n';

    return 0;
}