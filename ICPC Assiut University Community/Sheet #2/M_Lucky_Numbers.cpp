#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int a, b;
    cin >> a >> b;
    bool found = false;
    for(int i = a; i <= b; i++)
    {
        string s = to_string(i);
        bool l = true;
        for(char x : s)
        {
            if(x != '4' && x != '7')
            {
                l = false;
                break;
            }
        }
        if(l)
        {
            cout << i << " ";
            found = true;
        }
    }
    if(!found)
    {
        cout << "-1" << '\n';
    }
    return 0;
}