#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin>> n;

    set<int> alp;

    for(int i=0; i<n; i++) {
        int x;
        cin>> x;

        if(x>0) {
            alp.insert(x);
        }
    }

    cout<< alp.size()<< '\n';
    return 0;
}