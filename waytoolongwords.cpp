#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  int length;
  string s;

  while (t--) {
    cin >> s;
    length = s.length();
    if (length > 10) {
      cout << s[0] << (length - 2) << s[length - 1] << endl;
    } else {
      cout << s << endl;
    }
  }

  return 0;
}