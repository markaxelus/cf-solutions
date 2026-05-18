// Theatre Square

#include <iostream>
#include <cmath>
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long n,m,a;
  cin >> n >> m >> a;

  cout << (long long)(ceil((double) n / a) * ceil((double) m/a)) << "\n";

  return 0;
}