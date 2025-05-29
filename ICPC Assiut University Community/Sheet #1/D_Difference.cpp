#include <iostream>

using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll difference( ll a, ll b, ll c, ll d)
{
    ll x = (a * b);
    ll y = (c * d);
    return x - y;
}

int main()
{
    fast;
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll x = difference(a,b,c,d);
    cout << "Difference = " << x << endl;
    return 0;
}