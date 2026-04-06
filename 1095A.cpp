#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;

    string k;
    cin>> k;

    int i=2;

    for(int j=0; j<n; ) {
        cout<< k.at(j);

        j = i+j;
        i++;
    }

    cout<< '\n';

    return 0;
}