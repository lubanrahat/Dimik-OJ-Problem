#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    for(int i = 1; i <= tt; i++) {
        int n;
        cin >> n;
        cout<<"Case "<<i<<": ";
        for(int j = 1; j <= n; j++) {
            if(n % j == 0) {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}