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
#define   cs      cout <<"Case "<< t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;

//////////////////////////////RiadMEhedi///////////////////////////////////

const int N = 1e3+10;
int adMat[N][N];

int main(){
    ll n,e; cin>>n>>e;

    while(e--){
        ll a,b; cin>>a>>b;
        adMat[a][b]=1;  // directed
        adMat[b][a]=1;  // undirected
    }

    for(ll i=0; i<=n; i++){
        for(ll j=0; j<=n; j++){
            cout<<adMat[i][j]<<" ";
        }ln;
    }

    return 0;
}
