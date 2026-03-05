#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int s1,s2,s3,s4;
        cin>> s1>> s2>> s3>> s4;

        int match1= max(s1,s2);
        int match2= max(s3,s4);
        int match3 = min(s3,s4);
        int match5 = min(s1,s2);
        
        if(match3 > match1 || match5 > match2) {
            cout<< "NO"<< '\n';
        }

        else {
            cout<< "YES"<< '\n';
        }
    }

    return 0;
}