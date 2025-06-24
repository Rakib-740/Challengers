#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n, m; cin >> n >> m;

    vector<int> A(n);
    vector<int> B(m);
    for(auto &a : A)
    {
        cin >> a;
    }
    for(auto & b : B)
    {
        cin >> b;
    }
    if(m > n)
        {
            cout << "NO" << endll;
            return 0;
        }
    // bool flag = true;
    int i = 0, j = 0;
    while(i < n && j < m)
    {
        if(A[i] == B[j])
        {
            j++;
        }
        i++;
    }
    if(m == j)
    {
        cout << "YES" << endll;
    }
    else
    {
        cout << "NO" << endll;
    }
    return 0;
}