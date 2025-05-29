#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    vector<int> arr;
    int pass;

    while(cin >> pass)
    {
        arr.push_back(pass);
    }

    for(int num : arr)
    {
        if(num == 1999)
        {
            cout << "Correct" << '\n';
            return 0;
        }
        else
        {
            cout << "Wrong" << '\n';
        }
    }
    return 0;
}
