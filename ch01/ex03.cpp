#include <stdio.h>

int main() {
	// %d : ���� ���
	printf("%d + %d = %d\n", 2, 3, 5);

	// %f : �Ǽ� ���
	printf("%f\n", 3.14); // 3.140000
	printf("%.2f\n", 3.141592); // 3.14
	printf("%.2f\n", 3.1499); // 3.15

	// %c : 1�� ���
	printf("%c\n", 'z');

	// %s : ���ڿ� ���
	printf("%s\n", "Hello, World!");
}