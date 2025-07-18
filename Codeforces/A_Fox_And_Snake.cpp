#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int a, b; cin >> a >> b;

    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            if(i & 1)
            {
                cout << "#";
            }
            else
            {
                if(i % 4 == 0)
                {
                    if(j == 1)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else
                {
                    if(j < b)
                    {
                        cout << ".";
                    }
                    else
                    {
                        cout << "#";
                    }
                }
            }
        }
        cout << endll;
    }
    return 0;
}