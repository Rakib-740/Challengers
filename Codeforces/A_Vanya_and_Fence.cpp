#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, h;
    cin >> n >> h;

    vector<int> arr(n);
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        int a; cin >> a;
        arr.push_back(a);
        if(a > h)
        {
            count++;
        }
    }

    cout << n + count << endll;
    return 0;
}