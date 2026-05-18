// Soft Drinking

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int drinks_amount = k * l;
  int toast = drinks_amount / nl;
  int limes = c * d;
  int salt = p / np;
  int total = min({toast, limes, salt}) / n;

  cout << total << endl;

  return 0;
}