#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n, m; cin >> n >> m;

    vector<int> A(n);
    vector<int> B(m);
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    int sum_A = 0, sum_B= 0;
    for(int i = 0; i < n; i++)
    {
        sum_A += A[i];
    }
    for(int i = 0; i < m; i++)
    {
        sum_B += B[i];
    }

    if(sum_A == sum_B)
    {
        cout << "Yes" << endll;
    }
    else
    {
        cout << "No" << endll;
    }
    return 0;
}