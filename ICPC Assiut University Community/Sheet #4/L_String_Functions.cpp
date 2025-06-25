#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n, q; cin >> n >> q;

    // vector<string> a(n);
    string s;
    cin >> s;

    int a,b; 
    while(q--)
    {
        string op; cin >> op;
        
        if(op == "substr")
        {
            cin >> a >> b;

            cout << s.substr(a - 1, b - a + 1) << endll;
            
        }
        else if(op == "pop_back")
        {
            s.pop_back();
        }
        else if(op == "sort")
        {
            cin >> a >> b;
            sort(s.begin() + min(a,b) - 1, s.begin() + max(a,b));
        }
        else if(op == "reverse")
        {
            cin >> a >> b;
            reverse(s.begin() + min(a,b) - 1, s.begin() + max(a,b));
        }
        else if(op == "front")
        {
            cout << s.front() << endll;
        }
        else if(op == "back")
        {
            cout << s.back() << endll;
        }
        else if(op == "print")
        {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endll;
        }
        else 
        {
            char c; cin >> c;
            s.push_back(c);
        }
    }
    return 0;
}
