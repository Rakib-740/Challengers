#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a; cin >> a;
    long long count = 0;
    for(int i = 0; i < a; i++)
    {
        string s;
        cin >> s;

        if(s == "Tetrahedron")
        {
            count += 4;
        }
        else if( s == "Cube")
        {
            count += 6;
        }
        else if( s == "Octahedron")
        {
            count += 8;
        }
        else if( s == "Dodecahedron")
        {
            count += 12;
        }
        else if( s == "Icosahedron")
        {
            count += 20;
        }
    }

    cout << count << endll;
    return 0;
}