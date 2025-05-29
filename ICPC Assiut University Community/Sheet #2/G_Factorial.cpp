#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

long long factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main() {
    fast;
    int a; cin >> a;
    int arr[a];
    for(int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for(int num : arr)
    {
        cout << factorial(num) << '\n';
    }
    return 0;
}
