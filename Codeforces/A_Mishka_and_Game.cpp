#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;

    int count_m = 0, count_c = 0;

    while(n--)
    {
        int m, c; 
        cin >> m >> c;

        if(m == c)
        {
            continue;
        }
        else
        {
            if(m > c)
                count_m++;
            else
                count_c++;
        }
    }
    if(count_m == count_c)
    {
        cout << "Friendship is magic!^^" << endll;
    }
    else if(count_m > count_c)
    {
        cout << "Mishka" << endll;
    }
    else
    {
        cout << "Chris" << endll;
    }
    return 0;
}