#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;

    vector<int> arr(n * 2);

    for(int i = 0; i < n * 2; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    for(int i = 1; i <= n * 2; i++)
    {
        if(i & 1)
        {
            for(int j = 2; j <= n * 2; j += 2)
            {
                if(arr[i - 1] == arr[j - 1])
                {
                    count++;
                }
            }
        }
    }

    cout << count << endll;
    return 0;
}