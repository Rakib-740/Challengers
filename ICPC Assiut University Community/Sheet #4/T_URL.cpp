#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s; cin >> s;
    vector<string> list;
    int pos = 0;
    while((pos = s.find('=', pos)) != string::npos)
    {
        int start = pos + 1;
        int end = s.find('&', start);

        if(end != string::npos)
        {
            list.push_back(s.substr(start, end - start));
            pos = end + 1;
        }
        else
        {
            list.push_back(s.substr(start));
            break;
        }
    }

    cout << "username: " << list[0] << endll << "pwd: " << list[1] << endll << "profile: " << list[2] << endll << "role: " << list[3] << endll << "key: " << list[4] << endll;
    return 0;
}