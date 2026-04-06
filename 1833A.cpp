#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n;
        string str;

        cin>> n>> str;

        set<string> pair;
        
        for(int i=1; i<n; i++) {
            pair.insert(str.substr(i-1,2));
        }

        cout<< pair.size()<< '\n';
    }

    return 0;
}