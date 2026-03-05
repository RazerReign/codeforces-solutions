#include <iostream>
#include <string>
using namespace std;

int main() {
    int a1,a2,a3,a4;
    cin>> a1>> a2>> a3>> a4;

    string s;
    cin>> s;

    int calorie = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '1') {
            calorie = calorie + a1;
        }
        else if(s[i] == '2') {
            calorie = calorie + a2;
        }
        else if(s[i] == '3') {
            calorie = calorie + a3;
        }
        else if(s[i] == '4') {
            calorie = calorie + a4;
        }
        
    }

    cout<< calorie;
    return 0;
}