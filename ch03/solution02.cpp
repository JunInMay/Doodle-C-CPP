#include <stdio.h>

int main() {
	double weight, height;
	printf("ü��(kg) �Է�: "); scanf("%lf", &weight);
	printf("Ű(m) �Է�: "); scanf("%lf", &height);
	printf("BMI: %lf", weight / (height * height));
}