#include <stdio.h>

int main() {
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg2 = (double)sum / 3;
	double avg = sum / 3.0;

	printf("��� ���� : %f\n", avg);
}