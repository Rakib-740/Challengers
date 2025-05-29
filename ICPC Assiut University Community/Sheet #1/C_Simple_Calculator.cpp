#include <iostream>
using namespace std;

long long addition(int a, int b)
{
    long long c = (long long)a + b;
    return c;

}
long long multi(int a, int b)
{
    long long c = (long long)a * b;
    return c;
}
int subtract(int a, int b)
{
    int c = a - b;
    return c;
}
int main()
{
    int a, b;
    cin >> a >> b;
    long long c, d;
    int e;
    c = addition(a,b);
    d = multi(a,b);
    e = subtract(a,b);
    cout << a << " + " << b << " = " << c << endl;
    cout << a << " * " << b << " = " << d << endl;
    cout << a << " - " << b << " = " << e << endl;
    return 0;
}