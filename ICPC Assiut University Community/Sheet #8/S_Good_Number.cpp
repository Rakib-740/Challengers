#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k; cin >> n >> k;
    int count = 0;

    while(n--)
    {
        string s; cin >> s;
        bool flag = true;

        for(int i = 0; i <= k; i++)
        {
            if(s.find(char('0' + i)) == string::npos)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            count++;
        }
    }
    cout << count << endll;
    return 0;
}