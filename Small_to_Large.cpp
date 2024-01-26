#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    for(int i = 1; i <= tt; i++) {
        int n1,n2,n3;
        cin >> n1 >> n2 >> n3;
        int small,mid,big;

        if(n1 >= n2 && n1 >= n3) {
            big = n1;
        }
        else if(n2 >= n1 && n2 >= n3) {
            big = n2;
        }
        else {
            big = n3;
        }

        if(n1 <= n2 && n1 <= n3) {
            small = n1;
        }
        else if(n2 <= n1 && n2 <= n3) {
            small = n2;
        }
        else {
            small = n3;
        }

       mid = n1+n2+n3-big-small;

       cout<<"Case "<<i<<": ";
       cout<<small<<" "<<mid<<" "<<big<<endl;
    }

    return 0;
}