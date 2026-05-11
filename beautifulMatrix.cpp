#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x;

  for (int i=0; i < 5; i++) {
    for (int j=0; j < 5; j++) {
      cin >> x;
      if (x == 1) {
        cout << abs(i-2) + abs(j-2) << endl;
        return 0;
      }
    }
  }
  return 0;
}