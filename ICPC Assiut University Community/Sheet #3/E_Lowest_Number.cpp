#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;
    long long int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int min = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == min)
        {
            cout << min << " " << i+1 << '\n';
            break;
        }
    }
    return 0;
}