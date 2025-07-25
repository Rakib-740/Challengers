#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    while(n--)
    {
        int a; cin >> a;
        int temp = 9;
        if(a / 10 == 0)
        {
            cout << a << endll;
        }
        else
        {
            while(a > 0)
            {
                int digit = a % 10;

                if(temp > digit)
                    temp = digit;

                a = a / 10;
            } 
            cout << temp << endll;


        }


    }
    return 0;
}