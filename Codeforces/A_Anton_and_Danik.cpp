#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    int count_anton = 0, count_danik = 0;

    for(int i = 0; i < n; i++)
    {
        char c; cin >> c;

        if(c == 'D')
        {
            count_danik++;
        }
        else
        {
            count_anton++;
        }
    }

    if(count_anton > count_danik)
    {
        cout << "Anton" << endll;
    }
    else if(count_anton < count_danik)
    {
        cout << "Danik" << endll;
    }
    else
    {
        cout << "Friendship" << endll;
    }
    return 0;
}