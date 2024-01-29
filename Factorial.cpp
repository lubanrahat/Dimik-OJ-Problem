#include <bits/stdc++.h>
using namespace std;

unsigned long long int factorial(int n) {

    unsigned long long int fac = 1;

    for(int i = 1; i <= n; i++) {
        fac *= i;
    }
    return fac;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    while(tt--) {
        int n;
        cin >> n;

        printf("%llu\n",factorial(n));
    }

    return 0;
}