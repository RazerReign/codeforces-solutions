#include <iostream>
using namespace std;

int main() {
    string word;
    string code;
    cin>> word>> code;

    int sz = word.length();

    if (word.length() != code.length()) {
        cout << "NO" << endl;
        return 0;
    }

    bool getit = true;

    for(int i=0; i<word.length(); i++) {
        
        if(word[i] != code[sz-i-1]) {
            cout<< "NO";
            return 0;
        }
        
    }

    cout<< "YES";
    return 0;
}