#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    char sign; cin >> sign;
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(sign == '+')
    {
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < arr[i]; ++j)
            {
                cout << "+";
            }
            cout << '\n';
        }
    }
    else if(sign == '-')
    {
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < arr[i]; ++j)
            {
                cout << "-";
            }
            cout << '\n';
        }
    }
    else if(sign == '*')
    {
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < arr[i]; ++j)
            {
                cout << "*";
            }
            cout << '\n';
        }
    }
    else
    {
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < arr[i]; ++j)
            {
                cout << "/";
            }
            cout << '\n';
        }
    }

    return 0;
}
