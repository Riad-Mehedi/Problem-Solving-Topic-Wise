#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll tc; cin>>tc;
    while(tc--){
      string s; cin>>s;
      ll a = ('Z' - s[0])%4;
      ll b = ('Z' - s[1])%4;
      ll c = ('Z' - s[2])%4;

      //cout<< a << " " << b << " " << c << "\n";

      ll ans = (a^b^c);
      if(ans == 0) cout << "Jami" << endl;
      else cout << "Jan" << endl;

    }

    return 0;
}
