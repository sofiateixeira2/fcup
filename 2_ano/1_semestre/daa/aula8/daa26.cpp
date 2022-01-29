#include <bits/stdc++.h>

#define NDIRS 8
#define MAX 105

using namespace std;

int incx[NDIRS] = {-1, +1, 0, 0, -1, -1, +1, +1};
int incy[NDIRS] = {0, 0, -1, +1, -1, +1, -1, +1};

int rows, cols, c = 0;
char m[MAX][MAX];
bool visited[MAX][MAX];

void dfs(int y, int x) {
  if(y < 0 || x < 0 || y >= rows || x >= cols) return;
  if(visited[y][x] || m[y][x] != '#') return;
  c++;
  visited[y][x] = true;
  for(int i = 0; i < NDIRS; i++)
    dfs(y+incy[i], x+incx[i]);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  while(n > 0) {
    cin >> rows >> cols;


    for(int i = 0; i < rows; i++)
      cin >> m[i];

    int cmax = 0;

    for(int i = 0; i < rows; i++)
      for(int j = 0; j < cols; j++)
        if(m[i][j] == '#' && !visited[i][j]) {
          dfs(i, j);
          if(c > cmax) cmax = c;
          c = 0;
        }
    cout << cmax << "\n";

    memset(visited, false, sizeof(visited));

    n--;
  }



  return 0;
}
