#include <stdio.h>

int main() {
	float a, b;

	printf("두 실수 입력: ");
	scanf("%f%f", &a, &b);
	printf("%g + %g = %g", a, b, a + b);
}