#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    
    int mishka = 0, chris = 0;

    for(int i=0; i<t;i++) {
        int m,c;
        cin>> m>> c;

        if(m>c) {
            mishka++;
        }
        else if(c>m) {
            chris++;
        }

    }

    if(mishka > chris) {
        cout<< "Mishka \n";
        }

    else if(chris > mishka) {
        cout<< "Chris \n";
        }

    else if (mishka == chris) {
        cout<< "Friendship is magic!^^ \n";
    }

    return 0;
}