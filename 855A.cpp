#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>> n;

    set<string> potter;

    for(int i=0; i<n; i++) {
        string head;
        cin>> head;

        if(potter.count(head)) {
            cout<< "YES"<< '\n';
        }

        else {
            cout<< "NO"<< '\n';
            potter.insert(head);
        }
    }

    return 0;
}