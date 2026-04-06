#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>> n>> m;

    for(int i=1; i<=n; i++) {
        string row = "";
        if(i%2==1) {
            row = string(m, '#');
        }

        else if(i%4 == 0) {
            row = "#" + string(m-1, '.');
        }

        else {
            row = string(m-1, '.') + "#";
        }

        cout<< row<< '\n';
    }

    return 0;
}