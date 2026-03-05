#include <iostream>
#include <string>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin>> t;

    while(t--) {
        string k;
        cin>> k;

        if(k == "bca" || k == "cab") {
            cout<< "No \n";
        }
        else {
            cout<< "Yes \n";
        }
    }

    return 0;
}