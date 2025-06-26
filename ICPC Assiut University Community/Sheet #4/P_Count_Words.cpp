#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

int main() {
    fast;
    char c;
    bool isword = false;
    int count = 0;

    while((c = cin.get()) != '\n')
    {
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        if(!isword)
        {
        count++;
        isword = true;
        }
    }
    else  if(c == ' ' || c == '.' || c == '!' || c == '?' || c == ',')
    {
        isword = false;
    }
    }
    cout << count << endll;
    return 0;
}