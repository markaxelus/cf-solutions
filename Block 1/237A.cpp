// Free Cash

#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int max_cash = 1;
  int cur_cash = 1;

  int prev_h, prev_m;
  cin >> prev_h >> prev_m;
  int h,m;

  while(--n) {
    cin >> h >> m;
    if (h == prev_h && m == prev_m) {
      cur_cash++;
    } else {
      cur_cash = 1;
    }
    max_cash = max(max_cash, cur_cash);
    prev_h = h;
    prev_m = m;
  }

  cout << max_cash << endl;

  return 0;
}