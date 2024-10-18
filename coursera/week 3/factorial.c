#include <stdio.h>

// Assuming the factorial function is defined as follows:
int fect(int n) {
	if (n == 0)
		return 1;
	else
		return n * fect(n - 1);
}

int main() {
	printf("Please enter the value of n: ");
	int n;
	scanf("%d", &n);
	printf("The factorial of %d is %d\n", n, fect(n));

	return 0;
}