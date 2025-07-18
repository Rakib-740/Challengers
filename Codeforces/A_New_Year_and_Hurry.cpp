#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n, k; cin >> n >> k;

    int time_remain = 240 - k;
    int count = 0;
    int time = 0;
    for(int i = 1; i <= n; i++)
    {
        time += (5 * i);

        if(time <= time_remain)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endll;
    return 0;
}