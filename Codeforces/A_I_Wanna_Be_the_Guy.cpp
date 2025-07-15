#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;

    int x; cin >> x;

    vector<int> a(x);
    set<int> arr;

    for(int i = 0; i < x; i++)
    {
        cin >> a[i];
        arr.insert(a[i]);
    }

    int y; cin >> y;

    vector<int> b(y);

    for(int i = 0; i < y; i++)
    {
        cin >> b[i];
        arr.insert(b[i]);
    }

    

    // for(int i = 0; i < x; i++)
    // {
    //     arr.insert(a[i]);
    // }

    // for(int i = 0; i < y; i++)
    // {
    //     arr.insert(b[i]);
    // }
    
    if(n == arr.size())
    {
        cout << "I become the guy." << endll;
    }
    else
    {
        cout << "Oh, my keyboard!" << endll;
    }
    return 0;
}
