#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin>> n;

    set<pair<string, string>> taken;

    for(int i=0; i<n; i++) {
        string k, l;
        cin>> k>> l;

        taken.insert({k,l});
    }

    cout<< taken.size()<< '\n';

    return 0;
}