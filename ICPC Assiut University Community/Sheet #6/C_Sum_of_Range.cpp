#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    long long n1, n2; cin >> n1 >> n2;
    long long sum = 0;
    long long even_sum = 0;
    long long odd_sum = 0;
    for(long long i = min(n1,n2); i <= max(n1,n2); i++)
    {
        sum += i;
        if(i & 1)
        {
            odd_sum += i;
        }
        else
        {
            even_sum += i;
        }

    }
    cout << sum << endll << even_sum << endll << odd_sum << endll;
    return 0;
}