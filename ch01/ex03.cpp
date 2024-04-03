#include <stdio.h>

int main() {
	// %d : 정수 출력
	printf("%d + %d = %d\n", 2, 3, 5);

	// %f : 실수 출력
	printf("%f\n", 3.14); // 3.140000
	printf("%.2f\n", 3.141592); // 3.14
	printf("%.2f\n", 3.1499); // 3.15

	// %c : 1자 출력
	printf("%c\n", 'z');

	// %s : 문자열 출력
	printf("%s\n", "Hello, World!");
}