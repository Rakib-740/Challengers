#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    int n, k; cin >> n >> k;
    vector<int> A(n);
   
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int score = A[k -1];
    int count = 0;
    for(int a : A)
    {
        if(a >= score && a > 0)
        {
            count++;
        }
    }
    cout << count << endll;
    return 0;
}