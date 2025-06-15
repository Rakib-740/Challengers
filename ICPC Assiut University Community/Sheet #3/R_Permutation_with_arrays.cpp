#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    if(A == B)
    {
        cout << "yes" << '\n';
    }
    else
    {
        cout << "no" << '\n';
    }
    return 0;
}