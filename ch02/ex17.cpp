#include <stdio.h>

int main() {
	int a = 5;
	int b;

	b = ++a;
	printf("=== ��ġ ���� ���� ===\n");
	printf("a = %d\n", a); // 6
	printf("b = %d\n", b); // 6

	b = a++;
	printf("=== ��ġ ���� ���� ===\n");
	printf("a = %d\n", a); // 7
	printf("b = %d\n", b); // 6
}