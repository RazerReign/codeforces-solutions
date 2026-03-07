#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        string vowel = "aeiou";

        string k = "";

        int all = n/5;

        int rem = n % 5;


        for(int i=0; i<n/5 ; i++) {
            k+=vowel;
        }

        k += vowel.substr(0,rem);

        sort(k.begin(), k.end());
        
        cout<< k<< '\n';

    }

    return 0;
}