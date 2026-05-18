// Lucky Division

#include <iostream>
using namespace std;

bool isLucky(int n) {
  while (n) {
    if (!(n % 10 == 4 || n % 10 == 7)) {
      return false;
    }
    n /= 10;
  }
  return true;
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  if (isLucky(n) || n % 4 == 0 || n % 7 == 0 || n % 47 == 0 ) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  
  return 0;
}