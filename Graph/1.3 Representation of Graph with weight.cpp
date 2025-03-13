#include<bits/stdc++.h>
using namespace std;

//TYPES
#define   ll    long long int
#define   ld    long double
#define   vll   vector <ll>
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   endl    '\n'
#define   debug(x)   cout << #x << " : " << x << endl;

#define   ln      cout<<'\n';
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout <<"Case "<< t <<": ";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;

const int N = 1e3+10;
vector<pair<int,int>> adList[N];

int main(){
    FAST
    ll n,e; cin >> n >> e;
    // Input edges
    while(e--){
        ll a, b, wt;
        cin >> a >> b >> wt;
        adList[a].pb({b, wt});    // directed
        adList[b].pb({a, wt});    // undirected
    }
    // Print adjacency list
    for(ll i = 1; i <= n; i++){  // Changed from i=0 to i=1
        cout << "Index " << i << ": ";
        if(adList[i].empty()){
            cout << "Empty";
        } else {
            for(auto [node, weight] : adList[i]){  // Structured binding for cleaner output
                cout << "(" << node << "," << weight << ") ";
            }
        }ln;
    }

    return 0;
}
