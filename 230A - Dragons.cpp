#include <iostream>
#include <queue>
using namespace std;

typedef pair<int, int> node;

int main() {
  int s, n;
  cin >> s >> n;
  priority_queue<node, vector<node>, greater<node>> pq;
  for (int i = 0; i < n; ++i) { 
    int k, v;
    cin >> k >> v;
    pq.push(make_pair(k, v));
  }
  while (! pq.empty()) {
    int b = pq.top().second;
    if (s <= pq.top().first) {
      cout << "NO";
      return 0;
    }
    pq.pop();
    s += b;
  }
  cout << "YES";
}
