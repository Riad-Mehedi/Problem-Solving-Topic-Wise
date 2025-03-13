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
bool vis[N];
vi v[N];

void dfs(int src){
    /*Take action on node after entering the node*/
    vis[src] = true;
    cout << src << endl;

    for(int child : v[src]){
        //cout<< "par " << src << ", child " << child << endl;
        if(vis[child]==false){
            /*Take action on child before entering the child node*/
            dfs(child);
            /*Take action on child after exiting child node*/
        }
        /*take action on node before exiting the node*/
    }
}

int main(){
    int n,e; cin >> n >> e;

    while(e--){
        int a,b; cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }

    dfs(1); // for connected

    /*// for disconnected
    for(int i=1; i<=n; i++){
        if(!vis[i]) dfs(i);
    }*/

    return 0;
}



