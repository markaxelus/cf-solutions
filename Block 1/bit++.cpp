#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  string s;
  int x = 0;

  while (t--) {
    cin >> s;
    if (s[1] == '+') {
      x++;
    } else {
      x--;
    }
  }

  cout << x << endl;

  return 0;
}