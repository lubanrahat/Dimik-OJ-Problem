#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    while(tt--) {
        int n,count = 0;
        cin >> n;

        for(int i = 5; n/i >= 1; i*=5) {
            count += n/i;
        }

        cout<<count<<endl;
    }
    return 0;
}