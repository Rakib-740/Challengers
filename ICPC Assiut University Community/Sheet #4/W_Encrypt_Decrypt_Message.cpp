#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n; 
    string s;
    cin >> n >> s;
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    if(n == 1)
    {
        for(int i = 0; i < s.length(); i++)
        {
            size_t pos = 0;
            pos = Original.find(s[i],pos);
            cout << Key[pos];
        }
        cout << endll;
    }
    else
    {
        for(int i = 0; i < s.length(); i++)
        {
            size_t pos = 0;
            pos = Key.find(s[i],pos);
            cout << Original[pos];
        }
        cout << endll;
    }

    return 0;
}