// can't use a<b<c or such directly cuz the computer read it as
// (a>b)>c
// thus a>b && a>c && b>c

#include <iostream>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;

    cin>> t;

    while(t--) {
        int a,b,c;
        cin>> a>> b>> c;

        if (a<b && a<c && b<c) {
            cout<< "STAIR"<< '\n';
        }
        
        else if (a<b && b>c) {
            cout<< "PEAK"<< '\n';
        }

        else {
            cout<< "NONE"<< '\n';
        }
    }

    

    return 0;
}