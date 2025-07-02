#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'
long long equation(int a, int b)
{
    long long sum = 0;
    for(int i = 2; i <= b; i+= 2)
    {
        sum += pow(a, i);
    }
    return sum;
}

int main() {
    fast;
    int a, b; cin >> a >> b;
    long long sum = equation(a,b);

    cout << sum << endll;
    return 0;
}