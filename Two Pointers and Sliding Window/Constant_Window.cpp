// find the maximum sum of k consecutive elements

#include<bits/stdc++.h>
using namespace std;

#define		ll 			long long 
#define		lli 		long long int
#define 	ld 			long double

#define 	nl 			"\n"
#define     pnl     	cout<<'\n'
#define 	Yes 		cout<<"Yes"<<nl 
#define 	No 			cout<<"No"<<nl 
#define 	YES 		cout<<"YES"<<nl 
#define 	NO 			cout<<"NO"<<nl 

#define 	vi 			vector<int>
#define 	vll 		vector<ll>
#define 	pb 			push_back

#define     FAIYAZ  	ios_base::sync_with_stdio(false);cin.tie(NULL);
#define     srt(v)  	v.begin(),v.end()
#define     setp(n) 	fixed << setprecision(n)

#define     debug(x) 	cout << #x << " : " << x << nl;

#define     cs      	cout << "Case " << t << ": ";
#define     vp(v)   	for(auto it:v){cout << it <<' ';}pnl;


int main() {
	FAIYAZ

	int n,k; cin>>n>>k;

	vi v;
	for(int i=0; i<n; i++) {
		int x; cin>>x;
		v.pb(x);
	}

	//find sum (index 0 to k-1)
	int currentSum = 0;
	for(int i=0; i<k; i++) {
		currentSum += v[i];
	}

	int maxSum = currentSum;
	for(int i=k; i<n; i++) {
		currentSum = currentSum - v[i-k] + v[i]; 
		maxSum = max(maxSum, currentSum);
	}

	cout << maxSum << nl;


	return 0;
}


/*

Explaination:
input:
9 4
1 -2 3 4 -1 2 1 -5 4

Initial window sum (first 4 elements): 1 + (-2) + 3 + 4 = 6.
Sliding the window:

    Remove 1, add -1: 6 - 1 + (-1) = 4.
    Remove -2, add 2: 4 - (-2) + 2 = 8.
    Remove 3, add 1: 8 - 3 + 1 = 6.
    Remove 4, add -5: 6 - 4 + (-5) = -3.
    Remove -1, add 4: -3 - (-1) + 4 = 2.

Maximum sum: 8

*/