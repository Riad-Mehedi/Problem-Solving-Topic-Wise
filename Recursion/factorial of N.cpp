#include <bits/stdc++.h>
using namespace std;

int fact(int n) {

  // base case
  if(n==0) return 1;
  // recursive relation
  int small = fact(n-1);
  int big = n*small;
  return big;

}

int main()
{
    int n; cin>>n;
    cout << fact(n) << endl;

    return 0;
}


