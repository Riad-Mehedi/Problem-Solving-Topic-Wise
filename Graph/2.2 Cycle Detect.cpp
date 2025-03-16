#include<bits/stdc++.h>
using namespace std;

//TYPES
#define   ll    long long int
#define   ld    long double
#define   vi    vector <int>
#define   vll   vector <ll>
#define   vvi   vector<vector<int>>
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

const int N = 1e5+5;
bool vis[N];
vi g[N];

bool dfs(int src, int parent){
    vis[src] = true;
    bool isLoopExits = false;
    for(int child : g[src]){
        if(vis[child] && child == parent) continue; //
        if(vis[child]) return true; // uporer condition false holei cycle
        isLoopExits |= dfs(child, src); // j kono 1ta cycle detect holei true
    }
    return isLoopExits;
}

int main(){
    int n,e; cin >> n >> e;

    while(e--){
        int a,b; cin>>a>>b;
        g[a].pb(b);
        g[b].pb(a);
    }
    bool isLoopExits = false;
    for(int i=1; i<=n; i++){
        if(vis[i]) continue;
        if(dfs(i,0)){
            isLoopExits = true;
            break;
        }
    }
    cout << isLoopExits << endl;
    return 0;
}
