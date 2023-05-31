#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int N0, N1, N2, N3;

int main() {
	fastio;

	while(scanf("%d %d %d %d", &N0, &N1, &N2, &N3), (N0 || N1 || N2 || N3)) {
		printf("%d\n", ((120-N0+((N1-N0)%40)+((N2+N1)%40)+((N3-N2)%40)) * 9));
	}

	return 0;
}
