#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int a , b;
    scanf("%d %d", &a, &b);
    double x = (double)a / b;
    int p = floor(x);
    int q = ceil(x);
    int r = round(x);
    printf("floor %d / %d = %d\n", a, b, p);
    printf("ceil %d / %d = %d\n", a, b, q);
    printf("round %d / %d = %d\n", a, b, r);
    
    return 0;
}