// longest subarray with sum <= k

#include<bits/stdc++.h>
using namespace std;

#define		ll 		long long 
#define     lli     long long int
#define 	ld 		long double
#define 	nl 		"\n"
#define 	vi 		vector<int>
#define 	vll 	vector<ll>
#define 	pb 		push_back


void bruteforce(){
    ll k; cin>>k;
    ll n; cin>>n;
    vll v(n);
    for(ll i=0; i<n; i++) cin >> v[i];

    ll mxLen = 0;
    for(ll i=0; i<n; i++){
        ll sum = 0;
        for(ll j=i; j<n; j++){
            sum += v[j];

            if(sum <= k){
                mxLen = max(mxLen, j-i+1);
            }
            else break;
        }
    }
    cout << mxLen << nl;
}

void better(){
    ll k; cin>>k;
    ll n; cin>>n;
    vll v(n);
    for(ll i=0; i<n; i++) cin >> v[i];

    ll sum = 0, mxLen = 0;
    
    ll l=0, r=0;
    while(r<n){
        sum += v[r];

        while(sum > k){ // used shrink
            sum -= v[l];
            l++;
        }

        if(sum <= k){
            mxLen = max(mxLen, r-l+1);
        }
        r++;
    }
    
    cout << mxLen << nl;
}

void optimal(){
    ll k; cin>>k;
    ll n; cin>>n;
    vll v(n);
    for(ll i=0; i<n; i++) cin >> v[i];

    ll sum = 0, mxLen = 0;
    
    ll l=0, r=0;
    while(r<n){
        sum += v[r];

        if(sum > k){ // not used shrink
            sum -= v[l];
            l++;
        }

        if(sum <= k){
            mxLen = max(mxLen, r-l+1);
        }
        r++;
    }
    
    cout << mxLen << nl;
}

int main() {
	
    //bruteforce();  // O(N*N)
    //better();  // O(N+N)
    optimal();  // O(N)

    return 0;
}
