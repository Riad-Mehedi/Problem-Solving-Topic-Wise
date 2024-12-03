#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin>>tc;
    while(tc--) {
        int n; cin>>n;
        if( (n%7==0) or (n%7==1)) cout << "Second\n";
        else cout << "First\n";
    }
    return 0;
}
