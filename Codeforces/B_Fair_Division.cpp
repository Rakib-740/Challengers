#include <bits/stdc++.h>
using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        int one = 0, two = 0;
        int sum = 0;

        for(int i = 0; i < n; i++) 
        {
            int x; cin >> x;
            if(x == 1) one++;
            else two++;
            sum += x;
        }

        if(sum % 2 != 0) 
        {
            cout << "NO" << endll;  
        } 
        else if(one == 0 && (sum / 2) % 2 != 0) 
        {
            cout << "NO" << endll; 
        } 
        else 
        {
            cout << "YES" << endll;
        }
    }
    return 0;
}
