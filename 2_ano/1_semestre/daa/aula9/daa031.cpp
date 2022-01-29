#include <bits/stdc++.h>

#define MAX 255
#define NDIRS 4

using namespace std;

int l,c;

int incx[NDIRS] = {0, 0, +1, -1};
int incy[NDIRS] = {+1, -1, 0, 0};

queue<pair<pair<int,int>,int>> q; //{{y,x},distancia}

bool valid(int y, int x) {
  if(!(y < 0 || x < 0 || y >= l || x >= c)) return true;
  return false;
}

vector<int> bfs(string s[]) {
  vector<vector<int>> visited(l,vector<int>(c,-1));
  vector<int> distA;
  pair<int,int> cur;
  int d;
  while(!q.empty()) {
    pair<pair<int,int>,int> P = q.front();
    q.pop();
    cur = P.first;
    d = P.second;
    for(int i = 0; i < NDIRS; i++) {
      int nY = incy[i] + cur.first;
      int nX = incx[i] + cur.second;
      if(valid(nY, nX) && s[nY][nX] != '#' && visited[nY][nX] == -1) {
        if(s[nY][nX] == 'A') distA.push_back(d+1);
        q.push({{nY,nX},d+1});
        visited[nY][nX] = d+1;
      }
    }
  }
  return distA;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> l >> c;

  string s[l];
  for(int i = 0; i < l; i++) {
    cin >> s[i];
    for(int j = 0; j < c; j++) {
      if(s[i][j] == '#') q.push({{i,j},0});
    }
  }
  
  vector<int> distA = bfs(s);

  cout << distA[0] << " " << distA[(int)distA.size()-1] << "\n";

  return 0;
}
