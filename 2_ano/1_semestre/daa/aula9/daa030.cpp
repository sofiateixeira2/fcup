#include <bits/stdc++.h>

#define MAX 1505

using namespace std;

int n;
vector<vector<int>> adj;
vector<vector<int>> dist;

int max_d(int i) {
  int max = 0;
  for(int j = 0; j < n; j++) {
    if(dist[i][j] > max) max = dist[i][j];
  }

  return max;
}

vector<int> bfs(int v) {
  vector<int> visited(n, -1); visited[v] = 0;
  list<pair<int,int>> q;
  q.push_back({v, 0});

  int u, d;

  while(!q.empty()) {
    pair<int, int> p = q.front();
    q.pop_front();
    u = p.first; d = p.second;
    for(auto &w : adj[u]) {
      if(visited[w] == -1) {
        q.push_back({w, d+1});
        visited[w] = d+1;
      }
    }
  }
  return visited;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int e, a, b;
  cin >> n >> e;

  adj = vector<vector<int>>(n);
  dist = vector<vector<int>>(n);

  vector<int> exct(n);
  int dia = 0, raio = INT_MAX;
  vector<int> cent;
  vector<int> per;

  for(int i = 0; i < e; i++) {
    cin >> a >> b;
    adj[a-1].push_back(b-1);
    adj[b-1].push_back(a-1);
  }

  for(int i = 0; i < n; i++) {
    dist[i] = bfs(i);
  }
  for(int i = 0; i < n; i++) {
    exct[i] = max_d(i);
    if(exct[i] > dia) dia = exct[i];
    if(exct[i] < raio) raio = exct[i];
  }

  for(int i = 0; i < n; i++) {
    if(exct[i] == raio) cent.push_back(i);
    if(exct[i] == dia) per.push_back(i);
  }

  cout << dia << "\n";
  cout << raio << "\n";
  
  for(int i = 0; i < (int)cent.size()-1; i++) {
    cout << cent.at(i)+1 << " ";
  }
  cout << cent.at((int)cent.size()-1)+1 << "\n";

  for(int i = 0; i < (int)per.size()-1; i++) {
    cout << per.at(i)+1 << " ";
  }
  cout << per.at((int)per.size()-1)+1 << "\n";

  return 0;
}
