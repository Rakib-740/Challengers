#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;

    while(n--)
    {
        int t; cin >> t;
        vector<long long int> arr(t);

        for(int i = 0; i < t; i++)
        {
            cin >> arr[i];
        }

        long long int min = arr[0] + arr[1] + 1;
        for(int i = 0; i < t; i++)
        {
            for(int j = i + 1; j < t; j++)
            {
                long long int mini = arr[i] + arr[j] + j - i;
                if(mini < min) min = mini;
            }
        }
        cout << min << '\n';
    }
    return 0;
}