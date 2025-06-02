#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;
    vector<long long int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = 2;
        }
        else if(arr[i] > 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }
    for(int num : arr)
    {
        cout << num << " ";
    }
    cout << '\n';
    return 0;
}