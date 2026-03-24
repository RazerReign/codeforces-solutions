#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>> n;

    bool hard = false;

    for(int i=0; i<n; i++) {
        int x;
        cin>> x;

        if(x==1) {
            hard = true;
        }
    }

    if(hard) {
        cout<< "HARD"<< '\n';
    }

    else {
        cout<< "EASY"<< '\n';
    }

    return 0;
}