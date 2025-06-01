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
    for(int i = 0; i < n; i++)
    {
        if(arr[i] <= 10)
        {
            cout << "A[" << i << "]" << " = " << arr[i] << '\n';
        }
    }
    return 0;
}