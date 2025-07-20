#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;

    int count = 0;
    bool flag = true;
    int temp = 0;
    while(n--)
    {
        int a; cin >> a;
        
        if(temp != a)
        {
            flag = false;
        }
        else
        {
            flag = true;
        }
        temp = a;
        if(!flag)
        {
            count++;
        }
    }

    cout << count << endll;
    return 0;
}