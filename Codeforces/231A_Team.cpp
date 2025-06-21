#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;
    int count = 0;
    while(n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        bool flag = false;
        if(a == 1 && b == 1)
        {
            flag = true;
        }
        else if(b == 1 && c == 1)
        {
            flag = true;
        }
        else if(a == 1 && c == 1)
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
        if(flag)
        {
            count++;
        }
    }
    cout << count << endll;
    return 0;
}