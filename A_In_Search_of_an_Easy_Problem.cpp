#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int num : arr)
    {
        if(num == 1)
        {
            cout << "HARD" << '\n';
            return 0;
        }
    }
    cout << "EASY" << '\n';
    return 0;
}