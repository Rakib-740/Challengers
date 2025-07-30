#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;

    while(t--)
    {
        int n; cin >> n;

        int odd = 0, even = 0;
        for(int i = 0; i < 2*n; i++)
        {
            int num;
            cin >> num;

            if(num & 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if(odd == even)
        {
            cout << "Yes" << endll;
        }
        else
        {
            cout << "No" << endll;
        }
    }
    return 0;
}