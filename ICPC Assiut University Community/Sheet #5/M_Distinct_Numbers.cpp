#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

void disticnt(vector<long long int> & arr, int n)
{
    set<long long int> s;

    for(int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    cout << s.size() << endll;
}

int main() {
    fast;
    int n; cin >> n;

    vector<long long int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    disticnt(arr, n);
    return 0;
}