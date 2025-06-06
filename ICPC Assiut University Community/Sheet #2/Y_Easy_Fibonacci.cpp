#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int fib(int n)
// {
//     if(n == 1 || n == 0)
//     {
//        return n;

//     }
//     else
//     {
//     return fib(n - 1) + fib(n - 2);
//     }
// }

int main() {
    fast;
    int n; cin >> n;
    int a = 0; 
    int b = 1;
    for(int i = 0; i < n; i++)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;

        // cout << fib(i) << " ";
    }
    
    return 0;
}