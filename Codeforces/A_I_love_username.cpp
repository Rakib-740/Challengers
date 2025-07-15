#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;
    int first; cin >> first;
    n--;
    int maxi = first, mini = first;
    int count = 0;
    while(n--)
    {
        int score; cin >> score;

        if(score > maxi || score < mini)
        {
            count++;
        }
        maxi = max(maxi, score);
        mini = min(mini, score);
    }
    cout << count << endll;
    return 0;
}