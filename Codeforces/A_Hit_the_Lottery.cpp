#include <bits/stdc++.h>

using namespace std;
#define endll '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    cin >> n;

    int notes[] = {100, 20, 10, 5, 1};
    long long count = 0;

    for (int note : notes) 
    {
        count += n / note; 
        n %= note;         
    }

    cout << count << endll;
    return 0;
}