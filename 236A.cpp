#include <iostream>
using namespace std;

int main() {
    string user;
    cin>> user;

    int len = user.length();
    int count = 0;
    
    for (int i=0; i<len; i++) {
        int alp = 0;
        for(int j=0; j<i; j++) {
            if(user[i] == user[j]) {
                alp++;
            }
        }
        if(alp ==0) {
            count++;
        }
    }
    if(count%2 == 0) {
            cout<< "CHAT WITH HER!";
        }

    else {
            cout<< "IGNORE HIM!";
        }
    
    return 0;
}