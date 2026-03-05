#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        string name = "Timur";
        sort(name.begin(), name.end());

        string s;
        cin>> s;

        sort(s.begin(), s.end());
        if(s == name) {
            cout<< "YES \n";
        }
        else {
            cout<< "NO \n";
        }
    }

    return 0;
}