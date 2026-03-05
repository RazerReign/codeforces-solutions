#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>> t;

    while(t--) {
    string k;
    cin>> k;

    int m = (k[0] - '0') + (k[2] - '0');
    cout<< m<< '\n';
    }

    return 0;
}