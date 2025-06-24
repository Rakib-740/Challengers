#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n, q; cin >> n >> q;

    vector<int> arr(n);
    for(auto &a : arr) cin >> a;

    vector<long long> prefix(n + 1, 0);

    for(int i = 0; i < n; i++)
    {
        prefix[i + 1] = prefix[i] + arr[i];
    }
    while(q--)
    {
        int l, s; cin >> l >> s;

        cout << prefix[s] - prefix[l - 1] << endll;
    }
    return 0;
}