#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string str; cin >> str;
    str.erase(remove(str.begin(), str.end(), '+'), str.end());

    sort(str.begin(), str.end());

    string result = "";
    for(int i = 0; i < str.size(); i++)
    {
        result += str[i];

        if(i != str.size() - 1)
        {
            result += '+';
        }
    }

    cout << result << endll;
    return 0;
}