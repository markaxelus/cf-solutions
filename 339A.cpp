// Helpful Maths

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  sort(s.begin(), s.end());
  int len = s.length();

  for (int i = len / 2; i < len-1; i++) {
    cout << s[i] << "+";
  }
  cout << s[len-1];
  
  return 0;
}

