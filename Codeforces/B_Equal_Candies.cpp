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

        vector<long long> arr(n);

        for(int i = 0; i < n; i++) cin >> arr[i];

        long long min_candy = *min_element(arr.begin(), arr.end());
        long long sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == min_candy)
            {
                continue;
            }
            else
            {
                sum += (arr[i] - min_candy);
            }
        }
        cout << sum << endll;
    }
    return 0;
}