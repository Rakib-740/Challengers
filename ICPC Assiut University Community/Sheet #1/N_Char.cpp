#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    char ch;
    cin >> ch;
    int a = (int) ch;
    if(ch >= 'a' && ch <= 'z')
    {
        a = a - 32;
        cout << (char) a;
    }
    else{
        a = a + 32;
        cout << (char) a;
    }
    return 0;
}