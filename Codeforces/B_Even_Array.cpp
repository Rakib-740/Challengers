#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    while(n--)
    {
        int a; cin >> a;
        vector<int> arr(a);
        for(int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        int even_mis = 0, odd_mis = 0;

        for(int i = 0; i < a; i++)
        {
            if(i % 2 != arr[i] % 2)
            {
                if(i % 2 == 0)
                {
                    even_mis++;
                }
                else
                {
                    odd_mis++;
                }
            }
        }
        if(even_mis == odd_mis)
        {
            cout << even_mis << endll;
        }
        else
        {
            cout << "-1" << endll;
        }
    }
    return 0;
}