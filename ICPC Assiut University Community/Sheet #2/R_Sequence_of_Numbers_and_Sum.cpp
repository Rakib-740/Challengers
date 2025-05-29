#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int a, b;
    while(cin >> a >> b)
    {
        if( a <= 0 || b <= 0)
        {
            break;
        }
        int maxi = max(a,b);
        int mini = min(a,b);
        int sum = 0;

        for(int i = mini; i <= maxi; i++)
        {
            sum = sum + i;
        }
        for(int i = mini; i <= maxi; i++)
        {
            cout << i << " ";
        }
        cout << "sum =" << sum << '\n';
        


    }
    return 0;
}
