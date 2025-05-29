#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    string s, t;

    getline(cin , s);
    getline(cin , t);

    string s1, s2, t1, t2;

    istringstream iss(s);
    iss >> s1 >> s2;
    
    istringstream iss2(t);
    iss2 >> t1 >> t2;

    if(s2 == t2)
    {
        cout << "ARE Brothers" << endl;
    }
    else{
        cout << "NOT" << endl;
    }
    return 0;
}