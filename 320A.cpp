#include <iostream>
#include <string>
using namespace std;

int main() {
    string k;
    cin>> k;

    if(k.empty() || k[0] != '1') {
        cout<< "NO"<< '\n';
        return 0;
    }

    bool magic = true;

    for(char c:k) {
        if(c != '1' && c != '4') {
            magic = false;
            break;
        }
    }

    if(!magic) {
        cout<< "NO"<< '\n';
        return 0;
    }

    if(k.find("444") != string::npos) {
        cout<< "NO"<< '\n';
    }

    else {
        cout<< "YES"<< '\n';
    }

    return 0;
}