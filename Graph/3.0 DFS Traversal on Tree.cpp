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

void dfs(int src, int parent){
    // ei section holo niche jabar time e
    for(int child : v[src]){
        // ei section holo niche jabar time e
        if(child == parent) continue;
        dfs(child, src);
        // ei section holo upore uthar time e
    }
    // ei section holo upore uthar time e
}

int main(){
    int n; cin >> n;

    for(int i=0; i<n-1; i++){
        int a,b; cin>>a>>b;
        tree[a].pb(b);
        tree[b].pb(a);
    }

    dfs(1,0);

    return 0;
}



