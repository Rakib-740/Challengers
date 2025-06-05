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
    // int min = arr[0];
    // for(int i = 1; i < n; i++)
    // {
    //     if(arr[i] < min)
    //     {
    //         min = arr[i];
    //     }
    // }
    int min = *min_element(arr , arr + n);
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == min)
        {
            count++;
        }
    }
    if(count % 2 == 0)
    {
        cout << "Unlucky" << '\n';
    }
    else
    {
        cout << "Lucky" << '\n';
    }    
    return 0;
}