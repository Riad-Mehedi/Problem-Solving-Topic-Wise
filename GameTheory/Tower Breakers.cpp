#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll tc; cin>>tc;
    while(tc--) {
        ll n,m; cin>>n>>m;

        if(m==1) cout << 2 << endl;
        if(n%2==0) cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
