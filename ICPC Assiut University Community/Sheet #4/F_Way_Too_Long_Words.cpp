#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int t; cin >> t;
    cin.ignore();
     
    while(t--)
    {
        string w; 
        getline(cin, w);
        int n = w.length();
        if(n <= 10)
        {
            cout << w << endll;
        }
        else
        {
            cout << w[0] << n - 2 << w[n-1] << endll;
        }
           
    }
    return 0;
}