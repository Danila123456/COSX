#include <math.h>
#include <stdio.h>
int main() {
	double x, y;
	printf("Введите значение x");
	scanf_s("%lf", &x);
	y = cos(x);
	printf("Результат: y = %lf\n", y);
	y *= 2;
	printf("Результат: y = %lf\n", y);
	return 0;

}
