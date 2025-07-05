#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

void shift_zero()
{
    int n; cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    vector<int> result;
    int count = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] != 0)
        {
            result.push_back(arr[i]);
        }
        else
        {
            count++;
        }
    }
    while(count--)
    {
        result.push_back(0);
    }
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if(i < result.size() - 1)
        {
            cout << " ";
        }
    }
    cout << endll;
}

int main() {
    fast;
    shift_zero();
    return 0;
}