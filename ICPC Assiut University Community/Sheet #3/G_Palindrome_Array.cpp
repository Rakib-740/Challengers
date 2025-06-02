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
    int reverse[n];
    for(int i = 0; i < n; i++)
    {
        reverse[n - 1 - i] = arr[i];
    }
    bool flag = true;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != reverse[i])
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        cout << "YES" << '\n';
    }
    else
    { 
        cout << "NO" << '\n';
    }
    return 0;
}