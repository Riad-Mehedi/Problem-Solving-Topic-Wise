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

vvi cc;
vi current_cc;

void dfs(int src){
    vis[src] = true;
    current_cc.pb(src);

    for(int child : g[src]){
        if(vis[child]==false){
            dfs(child);
        }
    }
}

int main(){
    int n,e; cin >> n >> e;

    while(e--){
        int a,b; cin>>a>>b;
        g[a].pb(b);
        g[b].pb(a);
    }
    int cnt=0; // count connected components
    for(int i=1; i<=n; i++){
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.pb(current_cc);
        cnt++;
    }

    cout << cc.size() << endl; // or cout<<cnt
    for(auto it:cc){
        for(int itt:it){
            cout << itt << " ";
        }ln;
    }

    return 0;
}
