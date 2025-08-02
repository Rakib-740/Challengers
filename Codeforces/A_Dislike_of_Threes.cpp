#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;

    while(t--)
    {
        int n; cin >> n;

        int count =  0;
        int current = 1;

        while(true)
        {
            if(current % 3 != 0 && current % 10 != 3)
            {
                count++;
                if(count == n) 
                    break;
            }
            current++;
        }
        cout << current << endll;
    }
    return 0;
}