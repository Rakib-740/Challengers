#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;
    vector<int> arr;
    int num;
    while(cin >> num)
    {
        arr.push_back(num);
    }
    int max = 0;
    for(int i : arr)
    {
        if(i > max)
        {
            max = i;
        }
    }
    cout << max << '\n';
    return 0;
}
