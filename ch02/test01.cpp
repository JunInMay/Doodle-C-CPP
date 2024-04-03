#include <stdio.h>

int main() {
	float a = 3.14;
	float b = 3.13;

	// error occurs! you can't mod floating points numbers.
	printf("%f %% %f = %f", a, b, a % b);
}