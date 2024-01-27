#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    while(tt--) {
        int a,b,count = 0;
        cin >> a >> b;

        while(a <= b) {
            if(a == 0 || a == 1) {
                a++;
                continue;
            }
            // if(isPrime(a)) count++;
            count += isPrime(a);
            a++;
        }

        cout<<count<<endl;
    }

    return 0;
}