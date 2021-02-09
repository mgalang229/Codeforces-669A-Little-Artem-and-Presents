#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  // check the image in this repository for the explanation
  cout << (2 * (n / 3)) + (n % 3 != 0 ? 1 : 0) << '\n';
  return 0;
}      
