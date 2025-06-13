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
    bool even = true;
    int count = 0;
    while(even)
    {
        for(int i = 0; i < n; i++)
        {
            if(arr[i] % 2 != 0)
            {
                even = false;
                break;
            }
            arr[i] = arr[i] / 2;
        }
        if(even)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}