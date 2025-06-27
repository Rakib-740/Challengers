#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    string s; cin >> s;
    
    int balance = 0, count = 0;
    string temp = "";
    vector<string> split_group;
    
    for(char c : s)
    {
        temp += c;
        if(c == 'L')
        {
            balance++;
        }
        else if(c == 'R')
        {
            balance--;
        }

        if(balance == 0)
        {
            count++;
            split_group.push_back(temp);
            temp = "";
        }
    }
    cout << count << endll;
    for(string group : split_group)
    {
        cout << group << endll;
    }
    return 0;
}