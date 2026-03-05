#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;

    bool level[101] = {false};

    int k;
    cin>> k;
    
    for(int i=0; i<k; i++) {
        int X;
        cin>> X;
        level[X] = true;
    }

    int l;
    cin>> l;

    for(int i=0; i<l; i++) {
        int Y;
        cin>> Y;
        level[Y] = true;
    }

    bool levelpass = true;
    for(int i=1; i<=n; i++) {
        if(!level[i]) {
            levelpass = false;
            break;
        }
    }

    if(levelpass) {
        cout<< "I become the guy."<< endl;
    }

    else {
        cout<< "Oh, my keyboard!";
    }

    return 0;
}