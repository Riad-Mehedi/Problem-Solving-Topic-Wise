#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll tc; cin>>tc;
    while(tc--) {
        ll n; cin>>n;
        vector<ll> v(n);

        ll ans = 0;
        for(ll i=0; i<n; i++) {
            cin>>v[i];
            ans ^= v[i];
        }
        if(ans == 0) cout << "Second\n";
        else cout << "First\n";
    }
    return 0;
}
