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
    int x; cin >> x;
    int flag = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            flag = i;
            break;
        }
    }
    cout << flag << '\n';
    
    return 0;
}