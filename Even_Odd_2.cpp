#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    while(tt--) {
        string S;
        cin >> S;

        if(S[S.size()-1] % 2 == 0) {
            cout<<"even\n";
        }
        else {
            cout<<"odd\n";
        }
    }

    return 0;
}