#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

void char_print(int a, char c)
{
    for(int i = 1; i <= a; i++)
    {
        cout << c;
        if(i < a)
        {
            cout << " ";
        }
    }
    cout << endll;
}

int main() {
    fast;
    int n; cin >> n;

    while(n--)
    {
        int a;
        char c;
        cin >> a >> c;
        char_print(a,c);

    }
    return 0;
}