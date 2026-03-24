#include <iostream>
using namespace std;

bool Prime(int x) {
    if(x<2) return false;
    for(int i=2; i*i <= x; i++) {
        if(x%i == 0) return false;
    }

    return true;
}

int main() {
    int p,p2;
    cin>> p>> p2;

    int next = p+1;
    
    while(!Prime(next)) {
        next++;
    }

    if(next == p2) cout<< "YES"<< '\n';

    else cout<< "NO"<< '\n';

    return 0;
}