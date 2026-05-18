// Petya and Countryside

#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int a[n];

  int m = 1;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    int w = 1;
    // Left Loop
    for (int j = i - 1; j >= 0; j--) {
      if (a[j] <= a[i] && a[j] <= a[j+1]) {
        w++;
      } else {
        break;
      }
    }
    
    // Right Loop
    for (int k = i + 1; k < n; k++) {
      if (a[k] <= a[i] && a[k] <= a[k-1]) {
        w++;
      } else {
        break;
      }
    }
    m = max(m,w);
  }

  cout << m << endl;
  

  return 0;
}