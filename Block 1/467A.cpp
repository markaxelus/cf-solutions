// George and Accommodation

#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int p, q;
  int count = 0;

  while(n--) {
    cin >> p >> q;
    if ((q-p) < 2) {
      continue;
    } else {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}