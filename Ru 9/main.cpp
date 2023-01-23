#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
const int maxn = 10000+50;
int a[maxn];
int tree[maxn];
vector<int>g[maxn];
int n;
int ans = 0;

void init() {
  for (int i = 1; i <= n; i ++) {
    g[i].clear();
    tree[i] = -1;
  }
  ans = 0;
}

void dfs(int root) {
    int x;
    for (int i = 0; i < (int)g[root].size(); i ++) {
       x = g[root][i];
       dfs(x);
       if (a[x] <= 0) {
         a[root] += a[x]-1;
         ans -= a[x]-1;
       } else {
         a[root] += a[x]-1;
         ans += a[x]-1;
       }
    }
}
int main() {
    while (scanf("%d", &n), n) {
        init();
        int x, y, root;
        for (int i = 1; i <= n; i ++) {
            scanf("%d", &root);
            scanf("%d", &a[root]);
            scanf("%d", &x);
            for (int j = 1; j <= x; j ++) {
                scanf("%d", &y);
                g[root].push_back(y);
                tree[y] = root;
            }
        }
        for (int i = 1; i <= n; i ++) {
            if (tree[i] == -1) {
                dfs(i);
            }
        }
        printf("%d\n", ans);
    }
return 0;
}
