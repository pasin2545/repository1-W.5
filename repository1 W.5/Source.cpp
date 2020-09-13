#include<stdio.h>

int main() {
	int light[100][100], N, M, K, L, C,Mon,re =0,re2;
	scanf_s("%d %d", &N, &M);
	scanf_s("%d %d", &L, &K);
	scanf_s("%d", &C);
	if (N >= 1 && N <= 100 && M >= 1 && M <= 100 && L >= 1 && L <= 100 && K >= 1 && K <= 100 && C >= 1 && C <= 1000) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				scanf_s("%d", &light[i][j]);
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				re = re + light[i][j];
			}
		}
		re2 = C;
		re2 = re2 * K;
		re2 = re2 * L;
		re2 = re2 + re;
		re2 = re2 / C;
		if (re2 % C != 0) {
			re2 = re2 + 1;
		}
		printf("%d", re2);
	}
	return 0;
}