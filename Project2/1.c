#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void Phi(int n) {
	int n1 = 0, n2 = 1;

	if (n == 1) {
			printf("%d", n1);
	}
	else if (n >= 2) {
		printf("%d %d ", n1, n2);
	}

	for (int i = 0; i < n-2; i++) {
		int next = n1 + n2;
		printf("%d ", next);
		n1 = n2;
		n2 = next;
	}
}
int main(void)
{
	int n;

	printf("피보나치 수열의 갯수 : ");
	scanf("%d", &n);
	Phi(n);

	
	
}