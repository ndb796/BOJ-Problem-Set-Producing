#include <iostream>
#include <vector>
#include <queue>
#define MAX 300001

using namespace std;

vector<int> a[MAX];
int d[MAX];
int n, m, k, x;

void bfs(int x) {
	queue<int> q;
	q.push(x);
	d[x] = 0;
	while(!q.empty()) {
		int now = q.front();
		q.pop();
		for(int i = 0; i < a[now].size(); i++) {
			int y = a[now][i];
			if(d[y] == -1) {
				q.push(y);
				d[y] = d[now] + 1;
			}
		}
	}
}

int main(void) {
	cin >> n >> m >> k >> x;
	for(int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
	}
	fill(d, d + MAX, -1);
	bfs(x);
	int check = 0;
	for(int i = 1; i <= n; i++) {
		if(d[i] == k) {
			printf("%d\n", i);
			check = 1;
		}
	}
	if(check == 0) {
		printf("-1\n");
	}
	return 0;
}
