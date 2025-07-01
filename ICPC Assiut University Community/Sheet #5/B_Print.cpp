#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

void print_to_n(int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << i ;
        if(i < n)
        {
            cout << " ";
        }
    }
    cout << endll;
}

int main() {
    fast;
    int n; cin >> n;

    print_to_n(n);
    return 0;
}