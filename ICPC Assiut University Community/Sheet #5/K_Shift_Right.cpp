#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

void shift_right(vector<int> & arr, int n)
{
    while(n--)
    {
        for(int i = arr.size() - 1; i > 0; i--)
        {
            swap(arr[i], arr[i - 1]);
        }
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
    int n, a; cin >> n >> a;

    vector<int> arr(n);
    for(int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    
    shift_right(arr, a);
    return 0;
}