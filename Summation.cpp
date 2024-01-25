#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    while(tt--) {
        int n;
        cin >> n;

        int firstDigit;
        int lastDigit;

        lastDigit = n % 10;

        while(n != 0) {
            firstDigit = n % 10;
            n = n/10;
        }

        cout<<"Sum = "<<firstDigit+lastDigit<<"\n";
    }

    return 0;
}