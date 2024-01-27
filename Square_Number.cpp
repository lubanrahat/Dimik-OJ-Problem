#include <bits/stdc++.h>
using namespace std;

bool isSquareNumber(int number) {
    int squareRoot = 0;
    while(squareRoot*squareRoot < number) {
        squareRoot++;
    }
    return (squareRoot*squareRoot == number);
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

        if(isSquareNumber(n)) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }

    return 0;
}