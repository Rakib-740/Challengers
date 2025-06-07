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
    int maxi = *max_element(arr, arr + n);
    int mini = *min_element(arr, arr + n);
    int j_max = -1, j_min = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == maxi)
        {
            j_max = i;
        }
        if(arr[i] == mini)
        {
            j_min = i;
        }
    }
    int temp = arr[j_max];
    arr[j_max] = arr[j_min];
    arr[j_min] = temp;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}