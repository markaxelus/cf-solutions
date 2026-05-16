// Translation

#include <iostream>
#include <algorithm>
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s, t;
  cin >> s >> t;
  reverse(s.begin(), s.end());
  int len = s.length();

  if (s != t) {
    cout << "NO";
  } else {
    cout << "YES";
  }
  return 0;
}