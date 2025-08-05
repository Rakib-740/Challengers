#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr;
    int x;
    while(cin >> x)
    {
        arr.push_back(x);
    }

    int max_ele = *max_element(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == max_ele)
        {
            continue;
        }
        cout << max_ele - arr[i];

        if(i < arr.size() - 1)
        {
            cout << " ";
        }
    }
    cout << endll;
    return 0;
}