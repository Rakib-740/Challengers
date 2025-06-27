#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; cin >> n;
    string s; cin >> s;
    bool flag = true;
    int score = 0;
    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if(!flag)
        {
            flag = true;
            continue;
        }
        if(c == 'V')
        {
            score += 5;
        }
        else if(c == 'W')
        {
            score += 2;
        }
        else if(c == 'X')
        {
            if(i != s.size() - 1)
            {
                flag = false;
            }   
            else
            {
                break;
            }
        }
        else if( c == 'Y')
        {
            if(i != s.size() - 1)
            {
                s.push_back(s[i + 1]);
                flag = false; 
            }   
            else
            {
                break;
            }
        }
        else
        {
            if(i + 1 <  s.size())
            {
                if(s[i + 1] == 'V')
                {
                    score = score / 5;
                    flag = false;
                }
                else if(s[i + 1] == 'W')
                {
                    score = score / 2;
                    flag = false;
                }
            }
            
        }
    }
    cout << score << endll;
    return 0;
}