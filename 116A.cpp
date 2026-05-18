// Tram

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin >> n;

  int capacity = 0, max_cap = 0;
  
  
  while (n--) {
    int exit, enter;
    cin >> exit >> enter;
    
    capacity -= exit;
    capacity += enter;

    max_cap = max(capacity, max_cap);

  }

  cout << max_cap << endl;

  return 0;
}