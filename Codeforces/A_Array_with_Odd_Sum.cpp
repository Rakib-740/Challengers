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
        int n; cin >> n;
        vector<int> arr(n);
        bool odd = false, even = false;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] & 1)
            {
                odd = true;
            }
            else
            {
                even = true;
            }
        }
        if(odd && even)
        {
            cout << "YES" << endll;
        }
        else if(odd && !even)
        {
            if(n & 1)
            {
                cout << "YES" << endll;
            }
            else
            {
                cout << "NO" << endll;
            }
        }
        else
        {
            cout << "NO" << endll;
        }
    }
    return 0;
}