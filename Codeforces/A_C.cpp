#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    
    while(t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int count = 0;
        while(max(a,b) <= n)
        {
            if(a < b)
                a += b;
            else
                b += a;
            
            count++;
        }
        cout << count << endll;
    }
    return 0;
}