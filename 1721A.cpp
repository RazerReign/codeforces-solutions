#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin>> t;

    for(int i=0; i<t; i++) {
        string k;
        cin>> k;

        string alk;
        cin>> alk;

        k += alk;

        set<char> unique(k.begin(), k.end());

        cout<< unique.size() - 1<< '\n';
    }

    return 0;
}