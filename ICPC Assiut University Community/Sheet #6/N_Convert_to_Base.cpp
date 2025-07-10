#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() 
{
    fast;

    int T, X;
    cin >> T;

    if (T == 1) 
    {
        string N;
        cin >> N >> X;

        long long result = 0;
        for (int i = 0; i < N.size(); i++) 
        {
            char ch = N[i];
            int val;

            if (ch >= '0' && ch <= '9') val = ch - '0';
            else val = ch - 'A' + 10;

            result = result * X + val;
        }

        cout << result << endll;
    }

    else if (T == 2) 
    {
        long long N;
        cin >> N >> X;

        string ans = "";
        if (N == 0) ans = "0";
        else 
        {
            while (N > 0) 
            {
                int rem = N % X;
                if (rem < 10) ans += (rem + '0');
                else ans += (rem - 10 + 'A');
                N /= X;
            }
            reverse(ans.begin(), ans.end());
        }

        cout << ans << endll;
    }

    return 0;
}
