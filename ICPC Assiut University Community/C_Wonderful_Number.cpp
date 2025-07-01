#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

bool odd(int n)
{
    if(n % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void binary_palindrome(bool flag, int n)
{
    if(flag)
    {
        string binary = "";
    while(n > 0)
    {
        int bit = n % 2;
        binary.push_back('0' + bit);
        n = n / 2;
    }
    string palindrome_or_not = binary;
    reverse(binary.begin(), binary.end());
    if(binary == palindrome_or_not)
    {
        cout << "YES" << endll;
    }
    else
    {
        cout << "NO" << endll;
    }
    }
    else
    {
        cout << "NO" << endll;
    }
}

int main() {
    fast;
    int n; cin >> n;

    bool flag = odd(n);
    binary_palindrome(flag, n);
    return 0;
}