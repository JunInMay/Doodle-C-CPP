#include <stdio.h>

int main() {
	int a = 3;

	bool p = a >= 1 && a <= 10; // 1
	bool q = a == 3 || a == 7; // 1
	bool r = !q; // a < 1 || a > 10 => 0

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);
}