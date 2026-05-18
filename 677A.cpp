// Vanya and Fence

#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, h;
  cin >> n >> h;
  int w = 0;
  int a;

  while (n--) {
    cin >> a;
    w += (h < a) ? 2 : 1;
  }

  cout << w << endl;

  return 0;
}