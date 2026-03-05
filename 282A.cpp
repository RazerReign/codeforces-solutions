//the mistake i did was x in place of X

// learn to focus on minute detail

#include <iostream>
#include <string>
using namespace std;
 
int main() {
    
    int n;
    cin>> n;
 
    int X = 0;
    string str;
 
    while(n) {
        cin>>str;
 
        if(str== "++X" || str == "X++") {
            X++;
        }else {
            X--;
        }
 
        n--;
    }
 
    cout<< X<< endl;
 
    return 0;
}