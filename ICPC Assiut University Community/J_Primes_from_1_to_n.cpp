#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;

    vector<int> arr;
    if(n <= 2)
    {
        cout << "2 ";
        return 0;
    }
    else
    {
        cout << "2 ";
    }

    int count = 0;
    for(int i = 3; i <= n; ++i)
    {
        for(int j = 2; j*j <= i; ++j)
        {
            count = 0;
            if(i % j == 0)
            {
                count++;
                break;
            }
        }
        if(count <= 0)
        {
            arr.push_back(i);
        }
    }
    for(int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}