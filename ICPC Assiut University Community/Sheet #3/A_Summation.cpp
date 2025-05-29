#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;
    vector<long long int > arr(n);

    long long int m;

    for(int i = 0; i < n; ++i)
    {
        cin >> m;
        arr.push_back(m);
    }
    long long int sum = 0;
    for(long long int num : arr)
    {
        sum = sum + num;
    }
    cout << abs(sum) << '\n';
    return 0;
}