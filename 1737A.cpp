#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(0);


    int T;
    cin>> T;


    while(T--) {
        int n,k;
        cin>> n>> k;


        string m;
        cin>> m;
       

        int sz = n/k;
        int maxT = min(sz, 25);

        vector<int> cnt(25,0);
        for(char ch: m) cnt[ch-'a']++;

        string ans;
        ans.reserve(k);
       
        for(int i=0; i<k; i++) {
            int besT = 0;
            for(int t = maxT; t >= 0; t--) {
                bool ok = true;
                
                for(int c = 0; c<t; c++) {
                    if(cnt[c] == 0) {ok = false; break; }
                }

                if(ok) {
                    besT = t; break;
                }
            }

            for(int c=0; c< besT; c++) cnt[c]--;
            ans.push_back(char('a' + besT));
        }

        sort(ans.rbegin(), ans.rend());
        cout<< ans<< "\n";
        }
   
    return 0;
}