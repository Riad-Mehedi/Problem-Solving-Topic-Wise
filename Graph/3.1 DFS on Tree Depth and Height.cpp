#include<bits/stdc++.h>
using namespace std;

//TYPES
#define   ll    long long int
#define   ld    long double
#define   vi    vector <int>
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

const int N = 1e5+5;
vi tree[N];
int depth[N], height[N];

void dfs(int src, int parent){
    for(int child : tree[src]){
        if(child == parent) continue;
        depth[child] = depth[src]+1;
        dfs(child, src);
        height[src] = max(height[src], height[child]+1);
    }
}

int main(){
    int n; cin >> n;

    for(int i=0; i<n-1; i++){
        int a,b; cin>>a>>b;
        tree[a].pb(b);
        tree[b].pb(a);
    }

    dfs(1,0);

    for(int i=1; i<=n; i++){
        cout << "Node " << i << ": Depth = " << depth[i]
             << ", Height = " << height[i] << endl;
    }

    return 0;
}
