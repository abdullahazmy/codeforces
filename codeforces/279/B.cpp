#include <bits/stdc++.h>

using namespace std;

int const N = 1e5 + 1;
int n, t, a[N];

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
#endif

	scanf("%d %d", &n, &t);
	for(int i = 0; i < n; ++i)
		scanf("%d", a + i);

	int l = 0, r = 0, books = 0, solution = 0, time = 0;
	while(r < n) {
		if(t - time >= a[r]) {
			time += a[r];
			++r;
			++books;
		} else {
			time -= a[l];
			++l;
			--books;
		}

		solution = max(solution, books);
	}

	printf("%d\n", solution);
	
	return 0;
}