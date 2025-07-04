#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

void new_array(vector<int> & arr1, vector<int> & arr2, int n)
{
    vector<int> arr(n*2);
    for(int i = 0; i < n; i++)
    {
        arr[i] = arr2[i];
    }
    for(int i = 0; i < n; i++)
    {
        arr[n + i] = arr1[i];
    }
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if(i < arr.size() - 1)
        {
            cout << " ";
        }
    }
    cout << endll;
}

int main() {
    fast;
    int n; cin >> n;

    vector<int> arr1(n), arr2(n), arr(n*2);

    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    new_array(arr1, arr2, n);
    return 0;
}