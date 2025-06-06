#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;
    string s;
    // for(int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    cin >> s;
    int sum = 0;

    for(char c : s)
    {
       int temp = c - '0';
       sum = sum + temp;
    }
    // for(int i = 0; i < n; i++)
    // {
    //     sum = sum + arr[i];
    // }
    cout << sum << '\n';
    return 0;
}