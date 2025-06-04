#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int n; cin >> n;
    int x;
    for(int i = 1; i <=n; i++)
    {
        while(cin >> x)
        {
            bitset<32> binary(x);
            string temp = "";
            string binaryStr = binary.to_string();
            for(char a : binaryStr)
            {
                
                if(a == '1')
                {
                    temp = temp + a;
                }
            }
            int length = temp.length();
            int decimal = 0;
            for(int i = 0; i < length; i++) 
            {
            decimal += pow(2, length - 1 - i);
            }   
            cout << decimal << '\n';
        }
    }
    return 0;
}