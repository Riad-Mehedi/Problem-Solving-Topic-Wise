#include <bits/stdc++.h>
using namespace std;

int power (int n) {

  // base case
  if(n==0) return 1;
  // recursive relation
  return 2*power(n-1);


  /*
  => 2^4 = 2 * 2^3
  => 2^n = 2 * 2^(n-1)
  => f(n) = 2 * f(n-1)
  */
}

int main()
{
    int n; cin>>n;
    cout << power(n) << endl;

    return 0;
}


